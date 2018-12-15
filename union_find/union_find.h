#ifndef SUANFA_UNION_FIND_H
#define SUANFA_UNION_FIND_H

#include <assert.h>


class UF {
private:
    /**
     * 该数组记录了每个节点的领队节点，下标为节点，值为其领队节点，如 id[3] = 5 说明第节点3的领队是节点5
     * id is an array that records distinct identity of each set,when two sets are merged ,their id will be same
     */
    int* id;
    /**
     * 记录了当前共有几个独立的集合
     * cnt is the number of disjoint sets
     */
    int cnt;
    /**
     * 记录了每个节点有几个孩子节点(包括自己)
     * sz is an array that records the child number of each set including the set self.
     */
    int* sz;
public:
    // 一开始就弄N个独立的门派，每个元素一个门派
    UF(int n) {
        cnt = n;
        id = new int(n);
        for (int i = 0; i < n; i++) {
            id[i] = i;
        }
    }

    // 析构函数
    ~UF() {
        delete [] id;
    }

    // 查找节点p的掌门节点，递归，时间复杂度O(n)
    int find(int x) {
        assert(x>=0 && x < cnt);
        if (id[x] != x) {
            id[x] = find(id[x]);
        }
        return id[x];
    }

    // 看两个节点是否在同一个门派（同一个集合）
    bool connected(int x, int y){
        return find(x) == find(y);
    }

    // 两个集合合并
    void merge(int x, int y) {
        int i = find(x);       // x的掌门是i
        int j = find(y);       // y的掌门是j
        if (i == j)
            return;
        // 使child数量少的指向child数量多的
        id[i] = j;
        cnt --;

//        if (sz[i] < sz[j]) {
//            id[i] = j;
//            sz[j] += sz[i];
//            cnt --;
//        } else {
//            id[j] = i;
//            sz[i] += sz[j];
//            cnt --;
//        }
    }


};

#endif

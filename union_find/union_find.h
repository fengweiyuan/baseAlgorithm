#ifndef SUANFA_UNION_FIND_H
#define SUANFA_UNION_FIND_H

#include <assert.h>


class UF {
private:
    /**
     * �������¼��ÿ���ڵ����ӽڵ㣬�±�Ϊ�ڵ㣬ֵΪ����ӽڵ㣬�� id[3] = 5 ˵���ڽڵ�3������ǽڵ�5
     * id is an array that records distinct identity of each set,when two sets are merged ,their id will be same
     */
    int* id;
    /**
     * ��¼�˵�ǰ���м��������ļ���
     * cnt is the number of disjoint sets
     */
    int cnt;
    /**
     * ��¼��ÿ���ڵ��м������ӽڵ�(�����Լ�)
     * sz is an array that records the child number of each set including the set self.
     */
    int* sz;
public:
    // һ��ʼ��ŪN�����������ɣ�ÿ��Ԫ��һ������
    UF(int n) {
        cnt = n;
        id = new int(n);
        for (int i = 0; i < n; i++) {
            id[i] = i;
        }
    }

    // ��������
    ~UF() {
        delete [] id;
    }

    // ���ҽڵ�p�����Žڵ㣬�ݹ飬ʱ�临�Ӷ�O(n)
    int find(int x) {
        assert(x>=0 && x < cnt);
        if (id[x] != x) {
            id[x] = find(id[x]);
        }
        return id[x];
    }

    // �������ڵ��Ƿ���ͬһ�����ɣ�ͬһ�����ϣ�
    bool connected(int x, int y){
        return find(x) == find(y);
    }

    // �������Ϻϲ�
    void merge(int x, int y) {
        int i = find(x);       // x��������i
        int j = find(y);       // y��������j
        if (i == j)
            return;
        // ʹchild�����ٵ�ָ��child�������
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

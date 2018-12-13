#ifndef SUANFA_SPARSEGRAPH_H
#define SUANFA_SPARSEGRAPH_H

#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

// 稀疏图 - 邻接表
class SparseGraph {
private:
    int n, m; // 存储顶点数与边数
    bool directed; //  是否有向图
    vector <vector<int>> g; // 容器每个元素再保存一个容器，里面的容器保存与顶点相关的节点。

public:
    SparseGraph(int n, bool directed) {
        this->n = n;
        this->m = 0;
        this->directed = directed;
        for (int i = 0; i < n; i++) {
            g.push_back(vector<int>());  // 初始化时，外层容器顺序置入一个空的容器
        }
    }

    ~SparseGraph() {}  //因为没有new任何的东西，所以也不需要delete

    int V() { return n; }  // 返回顶点数
    int E() { return m; }  // 返回边数

    // 添加边，在v与w之间添加边
    void addEdge(int v, int w) {
        assert(v >= 0 && v < n);
        assert(w >= 0 && w < n);

        g[v].push_back(w);

        // 有向图就算了，无向图还要反向添加边
        // 如果是自环边的话，这里也不用再执行，暂没有考虑排除平衡边
        if (v != w && !directed) {
            g[w].push_back(v);
        }
        m++;
    }

    // 判断v与w之间是否已存在边，来避免平衡边的问题（两个节点间存在多条边）
    // O(n)的复杂度，所以这里先不避免平衡边，写出来但不用。
    bool hasEdge(int v, int w) {
        assert(v >= 0 && v < n);
        assert(w >= 0 && w < n);

        for (int i = 0; i < g[v].size(); i++) {
            if (g[v][i] == w)
                return true;
        }
        return false;
    }

    // 打印邻接表
    void show() {
        for (int i = 0; i < n; i++) {
            cout << i << ": ";
            for (int j = 0; j < g[i].size(); j ++) {
                cout << g[i][j] << " ";
            }
            cout << endl;
        }
    }

    // 相邻节点迭代器
    class adjIterator {
    private:
        SparseGraph &G; // 迭代的图
        int v;          // 迭代的目标顶点
        int index;      // 当前迭代到哪里了
    public:
        // 构造函数，迭代哪张图，要迭代哪个顶点的邻边
        adjIterator(SparseGraph &graph, int v): G(graph) {
            this->v = v;
            this->index = -1;
        }

        // 返回第一个元素，成功得到顶点，失败得到-1
        int begin() {
            index = 0;
            if (G.g[v].size())         // 如果为0，则说明这个顶点没有任何的邻居，就返回-1即可
                return G.g[v][0];
            return -1;
        }


        // 返回下一个元素，成功得到顶点，失败得到-1
        int next() {
            index++;
            if (index < G.g[v].size())    //还没有越界的话
                return G.g[v][index];
            return -1;
        }

        // 判断迭代是否终止了
        bool end() {
            return index >= G.g[v].size();
        }
    };


};

#endif

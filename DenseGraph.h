#ifndef SUANFA_DENSEGRAPH_H
#define SUANFA_DENSEGRAPH_H

#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

// 稠密图 - 邻接矩阵
class DenseGraph {
private:
    int n, m;                // 存放图的节点数与边数
    bool directed;           // 是否有向图
    vector<vector<bool>> g;  // 二维数组，每个元素用布尔变量来表示是否有这个边
public:
    // 初始化时，说明有几个顶点，是否有向图
    DenseGraph(int n, bool directed) {
        this->n = n;
        this->m = 0;
        this->directed = directed;
        for(int i = 0; i < n; i++) {
            g.push_back(vector<bool>(n, false));  // 每行都是一个vector数组，数组内有n个false
        }
    }

    ~DenseGraph() {}

    int V() {return n;}  // 返回顶点数
    int E() {return m;}  // 返回边数

    // 添加边，在v与w之间添加边
    void addEdge(int v, int w) {

        if (hasEdge(v, w)) {
            return;
        }

        assert(v>=0 && v < n);
        assert(w>=0 && w < n);

        g[v][w] = true;
        // 有向图就算了，无向图还要反向在邻接矩阵添加标记
        if (!directed) {
            g[w][v] = true;
        }
        m ++;
    }

    // 判断v与w之间是否已存在边
    bool hasEdge(int v, int w) {
        assert(v >= 0 && v < n);
        assert(w >= 0 && w < n);
        return g[v][w];
    }

    // 打印邻接矩阵
    void show() {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << g[i][j] << " ";
            }
            cout << endl;
        }
    }

    // 邻接顶点迭代器
    class adjIterator {
    private:
        DenseGraph &G;
        int v;
        int index;
    public:
        adjIterator(DenseGraph &graph, int v): G(graph) {
            this->v = v;
            this->index = -1;
        }


        int begin() {
            index = -1;
            return next();
        }


        int next() {
            for (index += 1; index < G.V(); index++ ) {
                if (G.g[v][index])                   // 找到true的边，则返回对应index，遍历完了还找不到就返回-1
                    return index;
            }
            return -1;
        }

        // 判断迭代是否终止了
        bool end() {
            return index >= G.V();
        }
    };




};

#endif

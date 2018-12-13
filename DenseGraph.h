#ifndef SUANFA_DENSEGRAPH_H
#define SUANFA_DENSEGRAPH_H

#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

// ����ͼ - �ڽӾ���
class DenseGraph {
private:
    int n, m;                // ���ͼ�Ľڵ��������
    bool directed;           // �Ƿ�����ͼ
    vector<vector<bool>> g;  // ��ά���飬ÿ��Ԫ���ò�����������ʾ�Ƿ��������
public:
    // ��ʼ��ʱ��˵���м������㣬�Ƿ�����ͼ
    DenseGraph(int n, bool directed) {
        this->n = n;
        this->m = 0;
        this->directed = directed;
        for(int i = 0; i < n; i++) {
            g.push_back(vector<bool>(n, false));  // ÿ�ж���һ��vector���飬��������n��false
        }
    }

    ~DenseGraph() {}

    int V() {return n;}  // ���ض�����
    int E() {return m;}  // ���ر���

    // ��ӱߣ���v��w֮����ӱ�
    void addEdge(int v, int w) {

        if (hasEdge(v, w)) {
            return;
        }

        assert(v>=0 && v < n);
        assert(w>=0 && w < n);

        g[v][w] = true;
        // ����ͼ�����ˣ�����ͼ��Ҫ�������ڽӾ�����ӱ��
        if (!directed) {
            g[w][v] = true;
        }
        m ++;
    }

    // �ж�v��w֮���Ƿ��Ѵ��ڱ�
    bool hasEdge(int v, int w) {
        assert(v >= 0 && v < n);
        assert(w >= 0 && w < n);
        return g[v][w];
    }

    // ��ӡ�ڽӾ���
    void show() {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << g[i][j] << " ";
            }
            cout << endl;
        }
    }

    // �ڽӶ��������
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
                if (G.g[v][index])                   // �ҵ�true�ıߣ��򷵻ض�Ӧindex���������˻��Ҳ����ͷ���-1
                    return index;
            }
            return -1;
        }

        // �жϵ����Ƿ���ֹ��
        bool end() {
            return index >= G.V();
        }
    };




};

#endif

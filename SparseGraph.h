#ifndef SUANFA_SPARSEGRAPH_H
#define SUANFA_SPARSEGRAPH_H

#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

// ϡ��ͼ - �ڽӱ�
class SparseGraph {
private:
    int n, m; // �洢�����������
    bool directed; //  �Ƿ�����ͼ
    vector <vector<int>> g; // ����ÿ��Ԫ���ٱ���һ����������������������붥����صĽڵ㡣

public:
    SparseGraph(int n, bool directed) {
        this->n = n;
        this->m = 0;
        this->directed = directed;
        for (int i = 0; i < n; i++) {
            g.push_back(vector<int>());  // ��ʼ��ʱ���������˳������һ���յ�����
        }
    }

    ~SparseGraph() {}  //��Ϊû��new�κεĶ���������Ҳ����Ҫdelete

    int V() { return n; }  // ���ض�����
    int E() { return m; }  // ���ر���

    // ��ӱߣ���v��w֮����ӱ�
    void addEdge(int v, int w) {
        assert(v >= 0 && v < n);
        assert(w >= 0 && w < n);

        g[v].push_back(w);

        // ����ͼ�����ˣ�����ͼ��Ҫ������ӱ�
        // ������Ի��ߵĻ�������Ҳ������ִ�У���û�п����ų�ƽ���
        if (v != w && !directed) {
            g[w].push_back(v);
        }
        m++;
    }

    // �ж�v��w֮���Ƿ��Ѵ��ڱߣ�������ƽ��ߵ����⣨�����ڵ����ڶ����ߣ�
    // O(n)�ĸ��Ӷȣ����������Ȳ�����ƽ��ߣ�д���������á�
    bool hasEdge(int v, int w) {
        assert(v >= 0 && v < n);
        assert(w >= 0 && w < n);

        for (int i = 0; i < g[v].size(); i++) {
            if (g[v][i] == w)
                return true;
        }
        return false;
    }

    // ��ӡ�ڽӱ�
    void show() {
        for (int i = 0; i < n; i++) {
            cout << i << ": ";
            for (int j = 0; j < g[i].size(); j ++) {
                cout << g[i][j] << " ";
            }
            cout << endl;
        }
    }

    // ���ڽڵ������
    class adjIterator {
    private:
        SparseGraph &G; // ������ͼ
        int v;          // ������Ŀ�궥��
        int index;      // ��ǰ������������
    public:
        // ���캯������������ͼ��Ҫ�����ĸ�������ڱ�
        adjIterator(SparseGraph &graph, int v): G(graph) {
            this->v = v;
            this->index = -1;
        }

        // ���ص�һ��Ԫ�أ��ɹ��õ����㣬ʧ�ܵõ�-1
        int begin() {
            index = 0;
            if (G.g[v].size())         // ���Ϊ0����˵���������û���κε��ھӣ��ͷ���-1����
                return G.g[v][0];
            return -1;
        }


        // ������һ��Ԫ�أ��ɹ��õ����㣬ʧ�ܵõ�-1
        int next() {
            index++;
            if (index < G.g[v].size())    //��û��Խ��Ļ�
                return G.g[v][index];
            return -1;
        }

        // �жϵ����Ƿ���ֹ��
        bool end() {
            return index >= G.g[v].size();
        }
    };


};

#endif

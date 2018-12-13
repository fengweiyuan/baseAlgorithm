#ifndef SUANFA_READGRAPH_H
#define SUANFA_READGRAPH_H

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cassert>
using namespace std;


// 在邻接图与邻接矩阵两种底层数据结构之上，再封装一层，对外提供图的服务，以屏蔽底层的差异

template <typename Graph>
class ReadGraph {
public:
    ReadGraph(Graph &graph, const string &filename) {
        ifstream file;
        file.open(filename);
        string line;
        int V, E;
        assert(file.is_open());
        assert(getline(file, line));
        stringstream ss(line);
        ss>>V>>E;

        assert(V == graph.V());

        for (int i = 0; i < E; i++) {
            assert(getline(file, line));
            stringstream ss(line);
            int a, b;
            ss>>a>>b;
            assert( a >= 0 && a < V);
            assert( b >= 0 && b < V);
            graph.addEdge(a, b);
        }
    }
};

#endif

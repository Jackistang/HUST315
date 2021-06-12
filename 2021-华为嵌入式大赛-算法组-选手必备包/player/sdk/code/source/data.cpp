#include "data.h"
#include "graph.h"
#include "node.h"
#include <cstdio>

/* 
1. 根据输入构造图（标记接收卫星，
2. 对所有接收卫星进行 dfs，获取周围卫星集合（未被访问过，dfs 深度大小？？）
3. 尝试将每两个接收卫星合并成一个（如何知道合并的是相邻的两个接收卫星？）
 */


static int union_node(Graph &graph, Node &n1, Node &n2) {

}

void get_answer(uint32_t N, uint32_t C, uint32_t D, uint32_t PS, const vector<bool>& typeVec, 
                const vector<Edge>& edgeVec, vector<Route> &retRouteVec)
{
    GraphInitParams params;
    params.N = N;
    params.C = C;
    params.D = D;
    params.PS = PS;
    params.typeVec = move(typeVec);
    params.edgeVec = move(edgeVec);

    Graph graph;
    int err;
    if ((err = init_graph(graph, params))) {
        printf("Init graph error (err %d)\n", err);
        return ;
    }
    printf("Init graph success\n");
}


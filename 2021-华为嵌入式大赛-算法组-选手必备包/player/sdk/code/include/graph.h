#pragma once

#include "data.h"
#include <iostream>
#include <vector>
using namespace std;

struct Graph {

};

struct GraphInitParams {
    uint32_t N;             // 表示所有卫星和发射基站的总数
    uint32_t C;             // 表示路径距离L与功耗P的系数，传输功耗计算公式为：P=C*L
    uint32_t D;             // 表示全网最大路径长度限制。
    uint32_t PS;            // 表示接收卫星所需要的站点功耗
    vector<bool> typeVec;   // 下标为i的值代表ID为i的站点身份，卫星为true，发射基站为false
    vector<Edge> edgeVec;   // 包含E条边
};

/**
 * @brief 利用参数初始化图，并通过 `graph` 返回句柄。
 * 
 * @param[out] graph 图的句柄
 * @param[in] params 用于构建图的参数
 * 
 * @return int
 * @retval 0  初始化图成功
 * @retval -1 初始化图失败
*/
extern int init_graph(Graph &graph, GraphInitParams &params);

// ......   其他接口
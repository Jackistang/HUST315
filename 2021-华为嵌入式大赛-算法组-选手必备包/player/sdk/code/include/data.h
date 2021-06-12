#pragma once

#include <iostream>
#include <vector>
using namespace std;

struct Edge {
    uint32_t send;  // 发送站点
    uint32_t recv;  // 接受站点
    uint32_t dist;  // 距离
    uint32_t owner; // 所属的接收卫星
};

using Route = vector<uint32_t>;

/**
 * @brief 获取最终结果的接口，在 `main.c` 中调用。
 * 
 * @param[in]   N           表示所有卫星和发射基站的总数
 * @param[in]   C           表示路径距离L与功耗P的系数，传输功耗计算公式为：P=C*L
 * @param[in]   D           表示全网最大路径长度限制
 * @param[in]   PS          表示接收卫星所需要的站点功耗
 * @param[in]   typeVec     下标为i的值代表ID为i的站点身份，卫星为true，发射基站为false
 * @param[in]   edgeVec     包含E条边
 * @param[out]  retRouteVec 返回所有发射基站到对应接收卫星的结果集
 * 
 * @return None
*/
extern void get_answer(uint32_t N, uint32_t C, uint32_t D, uint32_t PS, const vector<bool>& typeVec, 
                const vector<Edge>& edgeVec, vector<Route> &retRouteVec);

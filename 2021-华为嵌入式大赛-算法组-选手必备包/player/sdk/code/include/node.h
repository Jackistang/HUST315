#pragma once

#include <vector>

struct Graph;

struct Node {

};

/**
 * @brief 在图中遍历节点周围 `不属于同一个接收卫星` 的节点。
 * 
 * @param[in] graph 图的句柄
 * @param[in] n 需遍历的起始节点
 * @param[out] v 返回的结果集
 * 
 * @return int
 * @retval 0 成功遍历获取结果
 * @retval -1 失败
*/
extern int node_dfs(Graph &graph, const Node &n, std::vector<Node> &v);

// ...... 其他接口
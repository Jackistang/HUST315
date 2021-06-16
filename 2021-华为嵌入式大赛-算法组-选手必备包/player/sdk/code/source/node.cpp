#include "node.h"
using namespace std;


/**
 * @brief 在图中遍历节点周围 `不属于同一个接收卫星` 的节点。进行 dfs，获取周围未被访问过的节点（有一定深度）。
 * 
 * @param[in] graph 图的句柄
 * @param[in] n 需遍历的起始节点
 * @param[out] v 返回的结果集
 * 
 * @return int
 * @retval 0 成功遍历获取结果
 * @retval -1 失败
*/
int node_bfs(Graph &graph, const Node &n, vector<Node> &v) {
    /***
     * Step 1: 从当前节点n开始进行bfs
     * 
     * Step 2: 依次访问当前结点的邻接节点( 在Graph中有列表, 需求1: 得到当前结点的邻接节点列表 )
     * 
     * Step 3: 从邻接矩阵判断当前到邻接节点的路径是否被占用( 需求2: 读取某一条边的占用情况 )
     * 
     * Step 4: 检查当前探测节点是否被遍历到( 内部解决 )。
     * 
     * Step 5: 根据BFS深度返回答案( 深 度 2层 ? ? ? ? )。
     **/
}
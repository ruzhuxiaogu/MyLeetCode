class Solution {
//拓扑排序
//1.选择一个入度为0的点并输出
//2.从网中删除此顶点及所有出边
//循环结束后，如输出的顶点数小于网中的顶点数，则输出有回路的信息，否则输出的顶点序列就是一个拓扑序列。
public:

    vector<int> findOrder(int numCourses, vector<pair<int, int>>& prerequisites) {
        vector<int> res;
        vector<vector<int>> graph(numCourses, vector<int>(0));
        vector<int> inDegree(numCourses, 0);
        for (auto u : prerequisites) {
            graph[u.second].push_back(u.first);
            ++inDegree[u.first];
        }
        queue<int> que;
        for (int i = 0; i < numCourses; ++i) {
            if (inDegree[i] == 0) que.push(i);
        }
        while (!que.empty()) {
            int u = que.front();
            res.push_back(u);
            que.pop();
            for (auto v : graph[u]) {
                --inDegree[v];
                if (inDegree[v] == 0) que.push(v);
            }
        }
        if (res.size() != numCourses) res.clear();
        return res;
    }
};

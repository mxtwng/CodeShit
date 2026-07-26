#pragma once
#include <vector>
#include <stack>
#include <set>
#include <algorithm>
#include <functional>

// Tarjan's Algorithm for Biconnected Components (Undirected Graph)
// Returns size of largest biconnected component
int tarjanBCC(int n, std::vector<std::vector<int>>& adjList) {
    std::vector<int> disc(n + 1, 0), low(n + 1, 0);
    std::stack<std::pair<int, int>> st;
    int timer = 0, maxSize = 0;

    std::function<void(int, int)> dfs = [&](int u, int parent) {
        disc[u] = low[u] = ++timer;

        for (int v : adjList[u]) {
            if (!disc[v]) {
                st.push({u, v});
                dfs(v, u);
                low[u] = std::min(low[u], low[v]);

                if (low[v] >= disc[u]) {
                    std::set<int> comp;
                    std::pair<int, int> e;
                    do {
                        e = st.top(); st.pop();
                        comp.insert(e.first);
                        comp.insert(e.second);
                    } while (!(e.first == u && e.second == v));
                    maxSize = std::max(maxSize, (int)comp.size());
                }
            }
            else if (v != parent && disc[v] < disc[u]) {
                low[u] = std::min(low[u], disc[v]);
                st.push({u, v});
            }
        }
    };

    for (int i = 1; i <= n; i++)
        if (!disc[i])
            dfs(i, -1);

    return maxSize;
}

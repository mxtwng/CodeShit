#pragma once
#include <vector>
#include <stack>
#include <algorithm>
#include <functional>

// Tarjan's Algorithm for Strongly Connected Components (Directed Graph)
// Returns number of strongly connected components
int tarjanSCC(int n, std::vector<std::vector<int>>& adjList) {
    std::vector<int> disc(n + 1, 0), low(n + 1, 0), onStack(n + 1, 0);
    std::stack<int> st;
    int timer = 0, sccCount = 0;

    std::function<void(int)> dfs = [&](int u) {
        disc[u] = low[u] = ++timer;
        st.push(u);
        onStack[u] = 1;

        for (int v : adjList[u]) {
            if (!disc[v]) {
                dfs(v);
                low[u] = std::min(low[u], low[v]);
            } 
            else if (onStack[v]) {
                low[u] = std::min(low[u], disc[v]);
            }
        }

        if (low[u] == disc[u]) { // root of SCC
            while (true) {
                int v = st.top(); st.pop();
                onStack[v] = 0;
                if (v == u) break;
            }
            sccCount++;
        }
    };

    for (int i = 1; i <= n; i++)
        if (!disc[i])
            dfs(i);

    return sccCount;
}

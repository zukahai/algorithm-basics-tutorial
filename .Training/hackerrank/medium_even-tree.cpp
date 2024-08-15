#include <bits/stdc++.h>

using namespace std;

int evenForest(int t_nodes, int t_edges, vector<int> t_from, vector<int> t_to) {
    vector<vector<int>> graph(t_nodes + 1);
    for (int i = 0; i < t_edges; i++) {
        graph[t_from[i]].push_back(t_to[i]);
        graph[t_to[i]].push_back(t_from[i]);
    }
    vector<int> parent(t_nodes + 1);
    vector<int> children(t_nodes + 1);
    function<void(int, int)> dfs = [&](int node, int prev) {
        parent[node] = prev;
        children[node] = 1;
        for (int i = 0; i < graph[node].size(); i++) {
            if (graph[node][i] != prev) {
                dfs(graph[node][i], node);
                children[node] += children[graph[node][i]];
            }
        }
    };
    dfs(1, 0);
    int result = 0;
    for (int i = 2; i <= t_nodes; i++) {
        if (children[i] % 2 == 0) {
            result++;
        }
    }
    return result;
}

int main() {
    int t_nodes;
    int t_edges;
    cin >> t_nodes >> t_edges;
    vector<int> t_from(t_edges);
    vector<int> t_to(t_edges);
    for (int i = 0; i < t_edges; i++) {
        cin >> t_from[i] >> t_to[i];
    }
    int result = evenForest(t_nodes, t_edges, t_from, t_to);
    cout << result << "\n";
    return 0;
}
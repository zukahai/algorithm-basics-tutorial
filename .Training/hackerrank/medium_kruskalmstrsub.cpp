#include <bits/stdc++.h>

using namespace std;

int kruskals(int g_nodes, vector<int> g_from, vector<int> g_to, vector<int> g_weight) {
    vector<pair<int, pair<int, int>>> edges;
    for (int i = 0; i < g_from.size(); i++) {
        edges.push_back({g_weight[i], {g_from[i], g_to[i]}});
    }
    sort(edges.begin(), edges.end());
    vector<int> parent(g_nodes + 1);
    for (int i = 1; i <= g_nodes; i++) {
        parent[i] = i;
    }
    int result = 0;
    for (int i = 0; i < edges.size(); i++) {
        int from = edges[i].second.first;
        int to = edges[i].second.second;
        int weight = edges[i].first;
        while (parent[from] != from) {
            from = parent[from];
        }
        while (parent[to] != to) {
            to = parent[to];
        }
        if (from != to) {
            parent[from] = to;
            result += weight;
        }
    }
    return result;
}

int main() {
    int g_nodes;
    int g_edges;
    cin >> g_nodes >> g_edges;
    vector<int> g_from(g_edges);
    vector<int> g_to(g_edges);
    vector<int> g_weight(g_edges);
    for (int i = 0; i < g_edges; i++) {
        cin >> g_from[i] >> g_to[i] >> g_weight[i];
    }
    int result = kruskals(g_nodes, g_from, g_to, g_weight);
    cout << result << "\n";
    return 0;
}
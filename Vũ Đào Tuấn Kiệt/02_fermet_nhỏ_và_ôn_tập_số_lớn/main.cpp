#include<bits/stdc++.h>
using namespace std;

 main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m, q;
        cin >> n >> m >> q;
        
        vector<pair<int, int>> adj[n+1];
        
        for(int i = 0; i < m; i++) {
            int u, v, w;
            cin >> u >> v >> w;
            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
        }
        
        while(q--) {
            int s, l;
            cin >> s >> l;
            vector<bool> visited(n+1, false);
            queue<int> que;
            que.push(s);
            visited[s] = true;
            
            while(!que.empty()) {
                int u = que.front();
                que.pop();
                
                for(auto edge : adj[u]) {
                    int v = edge.first;
                    int w = edge.second;
                    if(!visited[v] && w <= l) {
                        visited[v] = true;
                        que.push(v);
                    }
                }
            }
            
            int dem = 0;
            for(int i = 1; i <= n; i++) {
                if(visited[i]) dem++;
            }
            cout << dem << '\n';
        }
    }

}
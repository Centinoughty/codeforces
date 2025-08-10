#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> printPath(vector<vector<pair<int, int>>>& graph) {
        int n = graph.size();
        vector<int> res;
        
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        vector<int> dist(n, INT_MAX);
        vector<int> parent(n, -1);

        dist[0] = 0;
        pq.push({0, 0});

        while (!pq.empty()) {
            auto [weight, node] = pq.top();
            pq.pop();
            if (weight > dist[node]) continue;

            for (const auto& [ngb, w] : graph[node]) {
                if (dist[ngb] > weight + w) {
                    dist[ngb] = weight + w;
                    parent[ngb] = node;
                    pq.push({dist[ngb], ngb});
                }
            }
        }

        if (dist[n - 1] == INT_MAX) {
            return {-1};
        }

        int pos = n - 1;
        while (pos != -1) {
            res.push_back(pos + 1);
            pos = parent[pos];
        }

        reverse(res.begin(), res.end());
        return res;
    }
};

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<pair<int, int>>> graph(n);
    for (int i = 0; i < m; i ++) {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u - 1].push_back({v - 1, w});
        graph[v - 1].push_back({u - 1, w});
    }

    vector<int> path = Solution().printPath(graph);
    for (const int x : path) {
        cout << x << " ";
    }

    cout << endl;
    return 0;
}
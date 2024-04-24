class Solution {
public:
    
vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
    if (n == 1) {
        return {0};
    }

    vector<int> degree(n, 0);
    vector<unordered_set<int>> adj(n);

    // Build the adjacency list and degree of each node
    for (const auto& edge : edges) {
        int u = edge[0], v = edge[1];
        adj[u].insert(v);
        adj[v].insert(u);
        degree[u]++;
        degree[v]++;
    }

    queue<int> leaves;
    for (int i = 0; i < n; ++i) {
        if (degree[i] == 1) {
            leaves.push(i);
        }
    }

    while (n > 2) {
        int num_leaves = leaves.size();
        n -= num_leaves;
        
        for (int i = 0; i < num_leaves; ++i) {
            int leaf = leaves.front();
            leaves.pop();
            
            for (int neighbor : adj[leaf]) {
                degree[neighbor]--;
                if (degree[neighbor] == 1) {
                    leaves.push(neighbor);
                }
            }
        }
    }

    vector<int> result;
    while (!leaves.empty()) {
        result.push_back(leaves.front());
        leaves.pop();
    }

    return result;
}
};
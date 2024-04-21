class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> graph(n);
        
        for (const auto& edge : edges) {
            int u = edge[0], v = edge[1];
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        
        unordered_set<int> visited;
        return dfs(graph, visited, source, destination);
    }
    
    bool dfs(const vector<vector<int>>& graph, unordered_set<int>& visited, int current, int destination) {
        if (current == destination) {
            return true;
        }
        
        visited.insert(current);
        
        for (int neighbor : graph[current]) {
            if (visited.find(neighbor) == visited.end()) {
                if (dfs(graph, visited, neighbor, destination)) {
                    return true;
                }
            }
        }
        
        return false;
    }
};
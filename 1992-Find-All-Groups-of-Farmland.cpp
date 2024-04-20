
class Solution {
public:
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        int m = land.size();
        int n = land[0].size();
        
        vector<vector<int>> result;
        
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (land[i][j] == 1) {
                    int r2 = i, c2 = j;
                    
                    // Find the bottom right corner of the current group
                    while (r2 + 1 < m && land[r2 + 1][j] == 1) {
                        r2++;
                    }
                    
                    while (c2 + 1 < n && land[i][c2 + 1] == 1) {
                        c2++;
                    }
                    
                    result.push_back({i, j, r2, c2});
                    
                    // Mark the current group as visited (0)
                    for (int r = i; r <= r2; ++r) {
                        for (int c = j; c <= c2; ++c) {
                            land[r][c] = 0;
                        }
                    }
                }
            }
        }
        
        return result;
    }
};
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
    int c=0;
    sort(points.begin(),points.end(),[](const vector<int>& a, const vector<int>& b) {return a[1] < b[1];});
    int limit=points[0][1];
    int last=0;
    for (int i = 1; i < points.size(); ++i) {
        if (points[i][0] > limit){
            c++;
            limit=points[i][1];
            last= min(last,points[i][1]);
        }
    }
    return c+1;
}
};
class Solution {
public:
    int countSeniors(vector<string>& details) {
        int cnt=0;
        for(string s : details){
            if(stoi(s.substr(11,2)) > 60){
                cnt++;
            }
        }
        return cnt;
    }
};
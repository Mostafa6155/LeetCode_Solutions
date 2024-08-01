class Solution {
public:
    string toLowerCase(string s) {
        string t;
        for(char c : s){
            if(int(c) <= 90 && int(c) >= 65){
                   t+=char(int(c)+32);
            }else{
                t+=c;
            }
        }
         return t;
    }
};
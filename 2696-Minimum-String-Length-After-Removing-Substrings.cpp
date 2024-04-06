class Solution {
public:
    int minLength(string s) {
    stack<char> st;
    for(auto c:s){
        if (!st.empty() && c=='B' && st.top()=='A'){
            st.pop();
        }
        else if (!st.empty() && c=='D' && st.top()=='C'){
            st.pop();
        }
        else{ st.push(c); }
    }
    return st.size();
}
};
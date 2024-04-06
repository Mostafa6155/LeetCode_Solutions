class Solution {
public:
    string makeGood(string s) {
       stack<char> st;
    for (int i=0;i<s.length();i++) {
        char c=s[i];
        if (!st.empty() && abs(c-st.top())==32){
                st.pop();
        } else{
            st.push(c);
        }
    }
    string str;
    while (!st.empty()){
        str+=st.top();
        st.pop();
    }
    reverse(str.begin(), str.end());
    return str;
}
};
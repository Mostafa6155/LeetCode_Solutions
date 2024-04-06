class Solution {
public:
    string minRemoveToMakeValid(string s) {
       stack<int> st;
       stack<char> st2;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i]=='('){
            st.push(i);
            st2.push(s[i]);
        }
        else if (s[i]==')'){
            if (!st2.empty() && st2.top()=='('){
                st.pop();
                st2.pop();
            } else{
                st.push(i);
                st2.push(s[i]);
            }
        }
    }
    while (!st.empty()){
        s.erase(st.top(),1);
        st.pop();
    }
    return s;
}
};
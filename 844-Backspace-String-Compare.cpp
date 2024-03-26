class Solution {
public:
    bool backspaceCompare(string s, string t) {
     stack<char> st1;
     stack<char> st2;
    if (s[0]!='#'){
        st1.push(s[0]);
    }
    if (t[0] != '#') {
        st2.push(t[0]);
    }
    for (int i = 1; i < s.length(); ++i) {
        if (s[i]=='#'){
            if (!st1.empty()) {
                st1.pop();
            }
        } else{
            st1.push(s[i]);
        }
    }
    for (int i = 1; i < t.length(); ++i) {
        if (t[i]=='#'){
            if (!st2.empty()) {
                st2.pop();
            }
        } else{
           st2.push(t[i]);
        }
    }
    string t1,t2;
    while (!st1.empty()){
        t1+=st1.top();
        st1.pop();
    }
    while (!st2.empty()){
        t2+=st2.top();
        st2.pop();
    }
    return (t1 == t2);
}
};
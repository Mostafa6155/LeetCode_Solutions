class Solution {
public:
    bool isValid(string s) {
    stack<char> st;
    for(auto c : s){
        if (c=='('){
            st.push(c);
        }
        else if (c==')'){
            if (!st.empty() && st.top()=='('){
                st.pop();
            }
            else{
                st.push(c);
            }
        }
        // for { }
        if (c=='{'){
            st.push(c);
        }
        else if (c=='}'){
            if (!st.empty() && st.top()=='{'){
                st.pop();
            }
            else{
                st.push(c);
            }
        }
        // for[]
        if (c=='['){
            st.push(c);
        }
        else if (c==']'){
            if (!st.empty() && st.top()=='['){
                st.pop();
            }
            else{
                st.push(c);
            }
        }
    }
    return (st.empty());
    }
};
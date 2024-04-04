class Solution {
public:
    int maxDepth(string s) {
    int depth=0;
    auto c=0;
    stack<char> st;
    for( auto i : s){
        if (i=='('){
            st.push(i);
            c++;
            depth = max(depth,c);
        }
        else if (i==')'){
            if (!st.empty() && st.top()=='('){
                st.pop();
                c--;
            } else{
                st.push(i);
            }
        }
        if (st.empty()){
            depth = max(depth,c);
            c=0;
        }

    }
    return st.empty() ? depth : -1;
}
};
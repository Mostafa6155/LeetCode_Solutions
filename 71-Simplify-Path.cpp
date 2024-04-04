class Solution {
public:
    string simplifyPath(string path) {
    deque<string> st;
    for(int i=0;i<path.length();i++){
        if (path[i]=='/')
            continue;
        string m;
        while (i<path.length() && path[i]!='/'){
            m+=path[i];
            i++;
        }
        if (m==\.\)
            continue;
        else if (m==\..\){
            if (!st.empty()){
                st.pop_back();
            }
        }
        else{
            st.push_back(m);
        }
    }
    string t=\\;
    while (!st.empty()){
        t=\/\+st.back()+t;
        st.pop_back();
    }
    if(t.length()==0)
        t=\/\;
    return t;
}
};
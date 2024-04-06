class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
   stack<int> st;
   deque<int> q;
    for (int i = 0; i < students.size(); ++i) {
        st.push(sandwiches[sandwiches.size()-1-i]);
        q.push_back(students[i]);
    }
    int j=0;
    while (!st.empty() && j<4*students.size()){
        if (st.top()==q.front()){
            st.pop();
            q.erase(q.begin());
        } else{
            q.push_back(q.front());
            q.erase(q.begin());
        }
        j++;
    }
    return st.size();
}
};
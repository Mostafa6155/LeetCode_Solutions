class Solution {
public:
    int calPoints(vector<string>& operations) {
    deque<int> dq;
    for (auto i : operations) {
        if (i==\C\ && !dq.empty()){
            dq.pop_back();
        }
        else if (i==\D\){
            dq.push_back(2*dq.back());
        }
        else if (i==\+\){
            dq.push_back(dq.back()+(*(dq.end()-2)));
        }
        else{
            dq.push_back(stoi(i));
        }
    }
    int sum=0;
    for (auto i :dq) {
        sum+=i;
    } 
    return sum;
}
};
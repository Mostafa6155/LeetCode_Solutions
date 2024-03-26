class Solution {
public:
    int pivotInteger(int n) {
    int sum_front=1;
    int sum_back=n;
    int j=n-1;
    if (n==1){
        return n;
    }
    for (int i = 2; i <=j ; ) {
        if (sum_back==sum_front && i==j){
            return i;
        }
        else if (sum_front < sum_back){
            sum_front+=i;
            i++;
        } else{
            sum_back+=j;
            j--;
        }
    }
    return -1;
}
};
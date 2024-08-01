class Solution {
public:
    int countOdds(int low, int high) {
        int cnt=0;
        if(low %2 == 0 && high %2 ==0 ){
            high--;
            low++;
        }
        else if(low % 2==0){
            low++;
        }else if( high % 2 ==0){
            high--;
        }
        if(low > high){
            return 0;
        }
        cnt=high-low;
        cnt-=2;
        cnt/=2;
        return cnt+2;
    }
};
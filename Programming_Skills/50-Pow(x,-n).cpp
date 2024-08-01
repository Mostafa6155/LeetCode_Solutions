class Solution {
public:
    double myPow(double x, long int n) {
      if(n >= INT_MIN && n <= INT_MAX){
       if(x==1.00000){
       return 1.0;}
       if(n==0)
       return 1.0;
       if(n>0){
        if(n%2==0){
          return myPow(x*x,n/2);
        }
        else{
          return x*myPow(x*x,(n-1)/2);
        }
       }
       else{
      long int n2=-n;
           if(n%2==0){
          return 1.0/myPow(x*x,n2/2);
        }
        else{
          return 1.0/(x*myPow(x*x,n2/2));
        } 
       }}
       else{
         return 0.0;
       } 
    }
};
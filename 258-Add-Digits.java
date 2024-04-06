class Solution {

    public static int Add_Digits(int num){
        int result=0;
        while (num>0){
            result+=num%10;
            num/=10;
        }
        return result;
    }
    public static int addDigits(int num){
        while (num>9){
            num=Add_Digits(num);
        }
        return num;
    }
}
class Solution {
    fun fib(n: Int): Int {
        if(n==1 || n==0)
        return n
        else
        return fib(n-1)+fib(n-2)
    }
}
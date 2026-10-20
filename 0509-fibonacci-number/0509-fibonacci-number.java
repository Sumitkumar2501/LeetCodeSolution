class Solution {

    public int fib(int n) {
        // if(n==0 || n==1){
        //     return n;
        // }
        // else{
        //     return fib(n-1)+fib(n-2);
        // }
        int[] memo=new int[n+1];
        Arrays.fill(memo,-1);
        if(memo[n]==-1){
            int res;
            if(n==0 || n==1){
                res=n;
            }
            else{
                res=fib(n-1)+fib(n-2);
            }
            memo[n]=res;
        }
        return memo[n];


    }
}
class Solution {
    public int[] productExceptSelf(int[] nums) {
        
        //first method
        // int n=nums.length;
        // int[] ans=new int[n];

        // for(int i=0;i<n;i++){
        //     int product=1;
        //     for(int j=0;j<n;j++){
        //         if(i!=j){
        //             product*=nums[j];
        //         }
        //     }
        //     ans[i]=product;
        // }
        // return ans;

        //second method

        
        int n = nums.length;
        int[] ans = new int[n];
        for (int i = 0; i < n; i++) {
            ans[i] = 1;
        }
        for (int i = 1; i < n; i++) {
            ans[i] = ans[i - 1] * nums[i - 1];
        }
        int suffix = 1;

        for (int i = n - 2; i >= 0; i--) {
            suffix = suffix * nums[i + 1];
            ans[i] = ans[i] * suffix;
        }

        return ans;
    }
}
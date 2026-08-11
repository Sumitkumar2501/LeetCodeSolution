class Solution {
    public int missingNumber(int[] nums) {
        //first method
        // int n=nums.length;
        // int ans=n;
        // for(int i=0;i<n;i++){
        //     ans=ans^i^nums[i];
        // }
        // return ans;

        //second method 
        int n = nums.length;

        int expected = n * (n + 1) / 2;
        int actual = 0;

        for(int x : nums) {
            actual += x;
        }

        return expected - actual;
    }
}
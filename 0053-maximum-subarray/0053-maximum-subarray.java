class Solution {
    public int maxSubArray(int[] nums) {
        // int maxSum=Integer.MIN_VALUE;
        // int n=nums.length;
        // for(int i=0;i<n;i++){
        //     int currSum=0;
        //     for(int j=i;j<n;j++){
        //         currSum+=nums[j];
        //         maxSum=Math.max(currSum,maxSum);
        //     }
        // }
        // return maxSum;

        //second method
        int n=nums.length;
        int currSum=0;
        int maxSum=Integer.MIN_VALUE;

        for(int i=0;i<n;i++){
            currSum+=nums[i];
            maxSum=Math.max(currSum,maxSum);

            if(currSum<0){
                currSum=0;
            }
        }
        return maxSum;
    }
}
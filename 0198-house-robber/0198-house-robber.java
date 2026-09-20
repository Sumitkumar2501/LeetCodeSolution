class Solution {
    public int rob(int[] nums) {
        int n=nums.length;
        if(n==1) return nums[0];

        ArrayList<Integer> dp=new ArrayList<>(n);
        dp.add(nums[0]);
        dp.add(Math.max(nums[0],nums[1]));

        for(int i=2;i<n;i++){
            int value=Math.max(dp.get(i-1),dp.get(i-2)+nums[i]);
            dp.add(value);
        }
        return dp.get(n-1);

    }
}
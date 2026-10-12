class Solution {
    public int findGCD(int[] nums) {
        int max=nums[0];
        int min=nums[0];
        int gcd=1;
        for(int i=0;i<nums.length;i++){
            if(nums[i]>max){ max=nums[i]; }

            if(nums[i]<min){ min=nums[i]; }
        }
        int a=max;
        int b=min;

        if(a==0 || b==0) return Math.max(a,b);

        int result=Math.min(a,b);
        while(result>0){
            if(a%result ==0 && b%result==0){
                break;
            }
            result--;
        }
        return result;
    }
}
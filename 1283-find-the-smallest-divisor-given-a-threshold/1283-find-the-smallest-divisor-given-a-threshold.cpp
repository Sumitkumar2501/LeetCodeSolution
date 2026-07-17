class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        // int n=nums.size();
        // int max=nums[0];
        // for(int i=0;i<n;i++){
        //     if(max<nums[i]){
        //         max=nums[i];
        //     }
        // }

        // for(int i=1;i<=max;i++){
        //     int sum=0;
        //     for(int j=0;j<n;j++){
        //         sum+=(nums[j]+i-1)/i;
        //     }
        //     if(sum<=threshold){
        //         return i;
        //     }
        // }
        // return -1;

        int n=nums.size();
        int max=nums[0];
        for(int i=0;i<n;i++){
            if(max<nums[i]){
                max=nums[i];
            }
        }
        int low=1;
        int high=max;
        

        while(low<=high){
            int mid=low+(high-low)/2;
            int sum=0;
            for(int num:nums){
                sum+=(num + mid -1)/mid;
            }
            if(sum<=threshold){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};
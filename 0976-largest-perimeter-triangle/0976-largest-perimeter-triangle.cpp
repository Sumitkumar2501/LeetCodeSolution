class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        // int n=nums.size();
        // int ans=0;
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         for(int k=j+1;k<n;k++){
        //             if(nums[i] + nums[j] > nums[k] && nums[j] + nums[k] > nums[i] && nums[k] + nums[i] > nums[j]){
        //                 ans=max(ans,nums[i] + nums[j] + nums[k]);
        //             }
        //         }
        //     }
        // }
        // return ans;

        int n=nums.size();
        sort(nums.begin(),nums.end());

        for(int i=n-1;i>=2;i--){
            if(nums[i-2]+nums[i-1]>nums[i])
            return nums[i]+nums[i-1]+nums[i-2];
        }
        return 0;
    }
};
class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());

        int minDiff=INT_MAX;

        for(int i=0;i+k-1<n;i++){
            int diff=nums[i+k-1] - nums[i];

            if(diff<minDiff){
                minDiff=diff;
            }
        }

        return minDiff;
    }
};
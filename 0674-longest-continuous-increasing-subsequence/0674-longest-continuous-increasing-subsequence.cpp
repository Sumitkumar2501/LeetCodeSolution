class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;

        int curr=1;
        int maxLen=1;

        for(int i=1;i<n;i++){
            if(nums[i] > nums[i-1]){
                curr++;
            }
            else{
                curr=1;
            }
            maxLen=max(maxLen,curr);
        }
        return maxLen;
    }
};
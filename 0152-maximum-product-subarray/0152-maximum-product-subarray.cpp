class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxp=INT_MIN;
        int curr=1;
        for(int i=0;i<nums.size();i++){
            curr=curr * nums[i];
            maxp=max(curr,maxp);
            if(curr==0){
                curr=1;
            }
        }

        curr=1;
        for(int i=nums.size()-1;i >=0;i--){
            curr=curr * nums[i];
            maxp=max(curr,maxp);
            if(curr==0){
                curr=1;
            }
        }
        return maxp;
    }
};
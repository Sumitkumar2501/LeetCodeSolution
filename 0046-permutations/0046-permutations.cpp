class Solution {
public:
    void permutation(vector<vector<int>>& res,vector<int> nums,int index){
            if(index==nums.size()){
                res.push_back(nums);
                nums;
            }
            for(int i=index;i<nums.size();i++){
                swap(nums[index],nums[i]);

                permutation(res,nums,index+1);
                swap(nums[index],nums[i]);
            }

    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> res;
        permutation(res,nums,0);
        return res;
    }
};
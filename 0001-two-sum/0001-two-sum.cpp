class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    //     int n=nums.size();
    //     int i=0;
    //     int j=i+1;
    //     std::vector<int> result;
    //     for(int i=0;i<n-1;i++){
    //         if(nums[i]+nums[j]==target){
    //             result.push_back(i);
    //             result.push_back(j);
    //         }
    //     }
    //     return result;
    // }

    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]+nums[j]==target){
                return {i,j};
            }
        }
    }
    return {};
    }
};
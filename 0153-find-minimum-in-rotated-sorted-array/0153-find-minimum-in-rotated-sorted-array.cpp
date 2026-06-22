class Solution {
public:
    int findMin(vector<int>& nums) {
        // int n=nums.size();
        // int min=nums[0];
        // for(int i=0;i<n;i++){
        //     if(nums[i]<min){
        //         min=nums[i];
        //     }
        // }
        // return min;

        int low=0;
        int high=nums.size()-1;

        while(low<high){
            if(nums[low]<nums[high]){
                return nums[low];
            }

            int mid=low+(high - low)/2;
            if(nums[mid]>nums[high]){
                low=mid+1;
            }
            else
                high=mid;
        }

        return nums[low];

    }
};
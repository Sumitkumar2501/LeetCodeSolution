class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        // int n=nums.size();
        // if(n==1) return 0;
        // if(nums[0]>=nums[1]) return 0;
        // if(nums[n-1]>=nums[n-2]) return n-1;
        // for(int i=1;i<n-1;i++){
        //     if(nums[i]>=nums[i-1] && nums[i]>=nums[i+1]){
        //         return i;
        //     }
        // }
        // return -1;

        int n=nums.size();
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if((mid==0 || nums[mid-1]<=nums[mid]) && (mid==n-1 || nums[mid+1]<=nums[mid])){
                return mid;
            }
            if(mid>0 && nums[mid-1]>=nums[mid]){
            high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return -1;
    }
};
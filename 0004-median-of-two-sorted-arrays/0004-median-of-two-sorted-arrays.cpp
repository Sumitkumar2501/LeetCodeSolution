class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double> arr;
        for(int i=0;i<nums1.size();i++){
            arr.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            arr.push_back(nums2[i]);
        }

        sort(arr.begin(),arr.end());
        int n=arr.size();
        int intial=0;
        int final=n-1;
        double mid=-1;
        mid=(intial+final)/2;
        if(n%2!=0){
            return arr[mid];
        }
        else{
            return (arr[mid]+arr[mid+1])/2;
        }
        return 0;
    }
};
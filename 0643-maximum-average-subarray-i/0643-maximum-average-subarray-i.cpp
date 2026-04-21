class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int start=0;
        int end=0;
        int sum=0;
        int n=nums.size();
        double avg=0;
        double maxAvg=INT_MIN;
        while(end<n){
            sum+=nums[end];
            if(end-start+1<k){
                end++;
            }
            else{
                avg=(double)sum/k;
                maxAvg=max(maxAvg,avg);
                sum-=nums[start];
                start++;
                end++;
            }
        }
        return (double)maxAvg;

    }
};
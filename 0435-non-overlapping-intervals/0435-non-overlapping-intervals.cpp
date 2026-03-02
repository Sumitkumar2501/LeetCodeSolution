class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int intialsize=intervals.size();
        int finalsize=0;
        if(intervals.size()==0){
            return intervals.size();
        }
        

        sort(intervals.begin(),intervals.end(),[](vector<int> &a,vector<int> &b){
            return a[0]<b[0];
        });

        vector<int> curr=intervals[0];
        for(int i=1;i<intervals.size();i++){
            if(curr[1]>intervals[i][0]){
                intervals.erase(intervals.begin()+i);
            }
        }
        finalsize=intervals.size();
        return intialsize-finalsize;
    }
};
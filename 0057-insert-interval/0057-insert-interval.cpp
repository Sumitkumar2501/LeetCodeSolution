class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());

        vector<vector<int>> res;
        res.push_back(intervals[0]);

        for(int i=1;i<intervals.size();i++){
            vector<int>& last=res.back();
            vector<int>& curr=intervals[i];

            if(curr[0] <= last[1]){
                last[1]=max(last[1],curr[1]);
            }
            else{
                res.push_back(curr);
            }
        }
        return res;
    }
};
class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        vector<vector<int>> res;
        int i=0;
        int j=0;
        int n=firstList.size();
        int m=secondList.size();

        while(i<n && j<m){
            int l=max(firstList[i][0],secondList[j][0]);

            int r=min(firstList[i][1],secondList[j][1]);

            if(l<=r){
                res.push_back({l,r});
            }

            if(firstList[i][1]<secondList[j][1]){
                i++;
            }
            else{
                j++;
            }
        }
        return res;
    }
};
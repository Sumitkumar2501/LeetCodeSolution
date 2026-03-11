class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int lsum=0,rsum=0,maxsum=0;

        for(int i=0;i<k;i++){
            lsum=lsum+cardPoints[i];
            maxsum=lsum;
        }
        // maxsum=lsum;
        int rightindx=n-1;
        for(int i=k-1;i>=0;i--){
            lsum=lsum-cardPoints[i];
            rsum=rsum+cardPoints[rightindx];
            rightindx=rightindx-1;
            maxsum=max(maxsum,lsum+rsum);
        }
        return maxsum;
    }
};
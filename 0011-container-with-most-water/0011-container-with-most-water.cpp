class Solution {
public:
    int maxArea(vector<int>& height) {
        // int n=height.size();
        // int maxWater=0;
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         int w=j-i;
        //         int h=min(height[i],height[j]);
        //         int area=w*h;
        //         maxWater=max(maxWater,area);
        //     }
        // }
        // return maxWater;

        // Two pointer approach

        int n=height.size();
        int maxWater=0;

        int lp=0,rp=n-1;
        while(lp < rp){
            int w= rp-lp;
            int ht=min(height[lp],height[rp]);
            int currWater=w*ht; 
            maxWater=max(maxWater,currWater);

            height[lp] < height[rp] ? lp++:rp--;
        }
        return maxWater;
    }
};
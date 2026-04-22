class Solution {
public:
    int longestMountain(vector<int>& arr) {
        if(arr.size() <3) return 0;

        int res=0;
        int i=0;
        bool peak=false;
        bool valley=false;


        while(i < arr.size()-1){
            if(arr[i]<arr[i+1]){
                int start=i;
                while(i<arr.size()-1 && arr[i]<arr[i+1]){
                    i++;
                    peak=true;
                }
                while(i<arr.size()-1 && arr[i]>arr[i+1]){
                    i++;
                    valley=true;
                }
                if(peak==true && valley==true){
                    res=max(res,i-start+1);
                }
                peak=false;
                valley=false;
            }
            else{
                i++;
            }
        }
        return res;
    }
};
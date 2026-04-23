class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        // if(arr.size()<3) return 0;

        // int res=-1;
        // int i=0;
        // bool peak=false;
        // bool valley=false;
        // int greater=arr[0];

        // while(i<arr.size()-1){
        //     if(arr[i]<arr[i+1]){
        //         int start=i;
        //         while(i<arr.size()-1 && arr[i]<arr[i+1]){
        //             i++;
        //             peak=true;
        //         }
        //         while(i<arr.size()-1 && arr[i]>arr[i+1]){
        //             i++;
        //             valley=true;
        //         }
        //         if(peak==true && valley==true){
        //             for(int i=0;i<arr.size()-1;i++){
        //                 if(arr[i]>greater){
        //                     greater=arr[i];
        //                     res=i;
        //                 }
        //             }
        //         }
        //         peak=false;
        //         valley=false;
        //     }
        //     else{
        //         i++;
        //     }
        // }
        // return res;


        //method 2

        int st=1;
        int end=arr.size()-2;
        while(st<=end){
            int mid=st+(end-st)/2;

            if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
                return mid;
            }
            else if(arr[mid-1]<arr[mid]){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return -1;
    }
};
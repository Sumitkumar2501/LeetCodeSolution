class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        // char ans=letters[0];
        // for(char ch:letters){
        //     if(ch > target){
        //         ans=ch;
        //         break;
        //     }
        // }
        // return ans;

        int low=0;
        int high=letters.size()-1;

        while(low<=high){
            int mid=low+(high-low)/2;

            if(letters[mid] <= target){
                low=mid+1;
            }
            else
                high=mid-1;
        }
        return letters[low%letters.size()];
    }
};
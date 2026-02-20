class Solution {
public:
    bool isPalindrome(string s) {
        string s1="";

        for(char ch: s){
            if(isalnum(ch)){
                s1.push_back(tolower(ch));
            }
        }

        string rev=s1;
        reverse(rev.begin(),rev.end());

        return s1 == rev;

    }
};
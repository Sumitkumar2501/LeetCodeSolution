class Solution {
    public boolean isPalindrome(int x) {
        // String str=String.valueOf(x);
        // String reverse=new StringBuilder(str).reverse().toString();

        // return str.equals(reverse);

        //2nd method

        // if(x<0){
        //     return false;
        // }

        // int original=x;
        // int reverse=0;
        // while(x!=0){
        //     int digit=x%10;
        //     reverse=reverse*10+digit;
        //     x/=10;
        // }

        // return original==reverse;

        //3rd method

        String str=String.valueOf(x);

        int left=0;
        int right=str.length()-1;

        while(left<right){
            if(str.charAt(left)!=str.charAt(right)){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
}
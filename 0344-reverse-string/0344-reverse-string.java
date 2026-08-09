class Solution {
    public void reverseString(char[] s) {
        //first method
        // int left=0;
        // int right=s.length-1;

        // while(left<right){
        //     char temp=s[left];
        //     s[left]=s[right];
        //     s[right]=temp;

        //     left++;
        //     right--;
        // }

        //second method

        Stack<Character> st=new Stack<>();
        for(char c:s){
            st.push(c);
        }

        int i=0;
        while(!st.isEmpty()){
            s[i]=st.pop();
            i++;
        }
    }
}
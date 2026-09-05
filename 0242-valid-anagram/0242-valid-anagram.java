class Solution {
    public boolean isAnagram(String s, String t) {
        if(s.length()!=t.length()){
            return false;
        }
        char[] chars1=s.toCharArray();
        char[] chars2=t.toCharArray();
        Arrays.sort(chars1);
        Arrays.sort(chars2);

        String sorted1=new String(chars1);
        String sorted2=new String(chars2);

        return sorted1.equals(sorted2); 

    }
}
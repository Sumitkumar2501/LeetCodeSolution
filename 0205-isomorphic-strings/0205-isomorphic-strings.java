import java.util.*;
class Solution {
    public boolean isIsomorphic(String s, String t) {
                if (s.length() != t.length()) {
            return false;
        }

        Hashtable<Character, Character> table = new Hashtable<>();

        for (int i = 0; i < s.length(); i++) {

            char c1 = s.charAt(i);
            char c2 = t.charAt(i);

            if (table.containsKey(c1)) {

                if (table.get(c1) != c2) {
                    return false;
                }

            } else {

                if (table.containsValue(c2)) {
                    return false;
                }
                table.put(c1, c2);
            }
        }

        return true;
    }
}
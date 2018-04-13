package leetcodeIII;
import java.util.*;

public class _3longest_substring_without_repeating_characters {
    public static void main(String[] args) {
        Solution3 solution3 = new Solution3();
        System.out.println(solution3.lengthOfLongestSubstring("pwwkew"));
    }

}
class Solution3 {
    public int lengthOfLongestSubstring(String s) {
        int i = 0, j = 0;
        int max = 0;
        Set<Character> set = new HashSet<>();
        while (j < s.length()) {
            if (!set.contains(s.charAt(j))) {
                set.add(s.charAt(j++));
                max = Math.max(max, set.size());
            } else {
                set.remove(s.charAt(i++));
            }
        }
        return max;
    }
}
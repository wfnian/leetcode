package leetcodeIII;

public class _14longest_common_prefix {
    public static void main(String[] args) {
        String []s = {"abc","abdefg","abcdefghijk","abcdfghijk","abcef"};
        String []s1 = {};
        String ans = new Solution14().longestCommonPrefix(s);
        System.out.println(ans);//# 1
        System.out.println(new Solution14().longestCommonPrefix(s1));

    }
}
class Solution14 {
    public String longestCommonPrefix(String[] strs) {
        if (strs.length==0) return "";
        for (int i = 0;; i++) {
            for (int j = 0; j < strs.length; j++) {
                if (strs[j].length()>i && strs[j].charAt(i)==strs[0].charAt(i))
                    ;
                else return strs[0].substring(0,i);
            }
        }
    }
}
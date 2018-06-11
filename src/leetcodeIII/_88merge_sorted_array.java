package leetcodeIII;

import java.util.Arrays;
/**
 *Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.
 *
 *
 * Example:
 *
 * Input:
 * nums1 = [1,2,3,0,0,0], m = 3
 * nums2 = [2,5,6],       n = 3
 *
 * Output: [1,2,2,3,5,6]
 */
public class _88merge_sorted_array {
    public static void main(String[] args) {
        int[] nums1 = {-1,0,0,3,3,3,0,0,0};
        int[] nums2 = {1,2,2};
        int m = 6, n = 3;
        new Solution88().merge(nums1,m,nums2,n);

    }
}
class Solution88 {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int j = 0;
        for (int i = 0; i < nums1.length; i++)
            if (j<nums2.length&&nums1[i]==0){
                nums1[i] = nums2[j];
                j++;
            }
        Arrays.sort(nums1);
        for (int aNums1 : nums1) System.out.print(aNums1+",");

    }
}

package leetcodeIII;

public class _717a_bit_and_2_bit_characters {
    public static void main(String[] args) {
        Solution717 solution = new Solution717();
        int []nums = {1,1,1,0};
        boolean result = solution.isOneBitCharacter(nums);
        System.out.println(result);
    }
}
class Solution717 {
    public boolean isOneBitCharacter(int[] bits) {
        int i = 0;
        while (i<bits.length-1){
            if (bits[i] == 0){
                i++;
            }
            else i+=2;
        }
        System.out.println(i+" "+ bits.length);
        return i==bits.length-1;
    }
}
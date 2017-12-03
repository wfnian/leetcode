package leetcodeIII;

public class _724find_pivot_index {
    public static void main(String []args){
        int [] nums = {-1,-1,-1,0,1,1};
        Solution724 solution = new Solution724();
        int i = solution.pivotIndex(nums);
        System.out.println(i);
    }
}
class Solution724 {
    public int pivotIndex(int[] nums) {
        for (int i = 0; i < nums.length; i++)
            if(sum(nums,0,i)==sum(nums,i+1,nums.length))
                return i;
        return -1;
    }
    public int sum(int [] nums,int i,int j){
        int _sum=0;
        for (int k = i; k < j; k++) {
            _sum += nums[k];
        }
        return _sum;
    }
}
class Solution2 {//another solution DP
    public int pivotIndex(int[] nums) {
        int len = nums.length;
        int[] dp = new int[len + 1];
        dp[0] = 0;
        for (int i = 0; i < len;i++) {
            dp[i+1] = dp[i] + nums[i];
        }
        int sum = dp[len];
        for (int i = 0; i < len; i++) {
            if (dp[i] == sum - dp[i+1])
                return i;
        }
        return -1;
    }
}
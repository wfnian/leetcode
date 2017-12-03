package leetcodeIII;

public class _739daily_temperatures {
    public static void main(String[] args) {
        Solution739 solution739 = new Solution739();
        solution739.dailyTemperatures(new int[]{1,2,3});
    }
}
class Solution739 {
    public int[] dailyTemperatures(int[] temperatures) {
        int res[] = new int[temperatures.length];
        for(int i = 0, j = 0; i < temperatures.length-1; i++){
            for(j = i; j< temperatures.length; j++){
                if(temperatures[j] > temperatures[i]){
                    res[i] = j-i;
                    break;
                }
            }
        }
        return res;
    }
}
class Solution {
    public int[] getConcatenation(int[] nums) {
        int k=nums.length;
        int num1[]=new int[2 * k];
        for(int i=0;i<k;i++){
            num1[i] = nums[i];
            num1[i + k] = nums[i];
        }
        return num1;
    }
}
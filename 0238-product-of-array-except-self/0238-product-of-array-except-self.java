class Solution {
    public int[] productExceptSelf(int[] nums) {
        
        int[] ans = new int[nums.length];
        for(int i=0; i<nums.length; i++){
            ans[i] = 1;
        }
        int a = 1, b = 1;
        for(int i=0; i<nums.length; i++){
            ans[i] *= a;
            a *= nums[i];
        }
        for(int i=nums.length-1; i>=0; i--){
            ans[i] *= b;
            b *= nums[i];
        }
        return ans;
    }
}
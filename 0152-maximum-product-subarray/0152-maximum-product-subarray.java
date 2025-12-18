class Solution {
    public int maxProduct(int[] nums) {
        if(nums.length == 1){
            return nums[0];
        }
        int ans = Integer.MIN_VALUE;
        int pre = 1, suf = 1;
        for(int i=0; i<nums.length; i++){
            pre *= nums[i];
            suf *= nums[nums.length -i -1];
            ans = Math.max(ans, Math.max(pre, suf));

            if(pre == 0) pre = 1;
            if(suf == 0) suf = 1;
        }
        return ans;
    }
}
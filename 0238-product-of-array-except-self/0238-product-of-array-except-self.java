class Solution {
    public int[] productExceptSelf(int[] nums) {
        int n = nums.length;
        int[] pre = new int[n];
        int[] post = new int[n];
        int[] ans = new int[n];
        int a = 1, b = 1;
        for(int i=0; i<nums.length; i++){
            pre[i] = a * nums[i];
            a = pre[i];
            post[n-i-1] = b * nums[n-i-1];
            b = post[n-i-1];
        }
        ans[0] = post[1];
        ans[n-1] = pre[n-2];
        for(int i=1; i<n-1; i++){
            ans[i] = pre[i-1] * post[i+1];
        }
        return ans;
    }
}
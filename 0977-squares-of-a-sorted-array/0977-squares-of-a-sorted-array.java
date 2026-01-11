class Solution {
    public int[] sortedSquares(int[] nums) {
        int[] ans = new int[nums.length];
        int s = 0;
        int e = nums.length -1;
        int i=e;
        while(s<=e){
            int t1 = nums[s]*nums[s];
            int t2 = nums[e]*nums[e];
            if(t1>t2){
                ans[i] = t1;
                s++;
            }else{
                ans[i] = t2;
                e--;
            }
            i--;
        }
        return ans;
    }
}
class Solution {
    public int threeSumClosest(int[] nums, int target) {
        int n = nums.length;
        Arrays.sort(nums);
        int mini = Integer.MAX_VALUE;
        int ans = 0;
        for(int i=0; i<n; i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                if(Math.abs(sum-target)<mini){
                    mini = Math.abs(sum-target);
                    ans = sum;
                }
                if(sum>target){
                    k--;
                }else if(sum<target){
                    j++;
                }else{
                    return sum;
                }
            }
        }
        return ans;
    }
}
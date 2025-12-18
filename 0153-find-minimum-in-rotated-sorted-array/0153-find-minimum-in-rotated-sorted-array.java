class Solution {
    public int findMin(int[] nums) {
        if(nums.length == 1)return nums[0];
        for(int i=1; i<nums.length; i++){
            if(nums[i]<nums[i-1])return nums[i];
            if(i==nums.length-1)return nums[0];
        }
        return nums[0];
    }
}
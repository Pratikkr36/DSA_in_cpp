class Solution {
    public int removeDuplicates(int[] nums) {
        int i=0;
        int strike =0;
        for(int j=1; j<nums.length; j++){
            if(nums[j]==nums[i] && strike==0){
                strike++;
                nums[i+1]=nums[j];
                i++;
            }else if(nums[i]!=nums[j]){
                strike = 0;
                nums[i+1]=nums[j];
                i++;
            }
        }
        return i+1;
    }
}
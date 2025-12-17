class Solution {
    public boolean containsDuplicate(int[] nums) {

        HashSet<Integer> sett = new HashSet<>();
        for(int i=0; i<nums.length; i++){
            if(!sett.add(nums[i])){
                return true;
            }
        }
        return false;
    }
}
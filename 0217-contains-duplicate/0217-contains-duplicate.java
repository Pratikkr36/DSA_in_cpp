class Solution {
    public boolean containsDuplicate(int[] nums) {
        Map<Integer, Integer> mpp = new HashMap<>();
        Boolean result = false;
        for(int i=0; i<nums.length; i++){
            if(mpp.containsKey(nums[i])){
                return true;
            }
            mpp.put(nums[i], i);
        }
        return result;
    }
}
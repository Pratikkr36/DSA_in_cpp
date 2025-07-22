class Solution {
    public int[] twoSum(int[] nums, int target) {
        
        Map<Integer, Integer> mpp = new HashMap<>();

        for(int i=0; i<nums.length; i++){
            int num = nums[i];
            if(mpp.containsKey(target-num)){
                return new int[] {i, mpp.get(target - num)};
            }
            mpp.put(num, i);
        }
        return new int[] {-1,-1};
    }
}
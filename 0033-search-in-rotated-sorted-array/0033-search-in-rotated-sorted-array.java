class Solution {
    public int search(int[] nums, int target) {
        int s = 0;
        int n = nums.length;
        int e = n-1;
        while(s<e){
            int mid = s + (e-s)/2;
            if(nums[mid]>=nums[0]){
                if(target<=nums[mid] && target>=nums[0]){
                    e = mid;
                }else{
                    s = mid+1;
                }
            }else{
                if(target>nums[mid] && target<=nums[n-1]){
                    s = mid+1;
                }else{
                    e = mid;
                }
            }
        }
        return nums[s] == target ? s:-1;
    }
}
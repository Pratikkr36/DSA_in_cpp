class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s = 0;
        int n = nums.size();
        int e = n-1;
    while(s<e){
        int mid = s + (e-s)/2;
        if(nums[0]<=nums[mid]){
            if(target <= nums[mid] && target>=nums[0]){
                e = mid;
            }
            else{
                s = mid + 1;
            }
        }
        else{
            if(nums[mid] < target && target<=nums[n-1]){
                s = mid + 1;
            }
            else{
                e = mid;
            }
        }
    }
    return nums[s] == target ? s : -1;
    }
};
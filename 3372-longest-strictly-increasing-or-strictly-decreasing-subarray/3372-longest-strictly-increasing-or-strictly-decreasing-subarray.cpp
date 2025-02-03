class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        int maxx = 1;
        int count = 1;
        for(int i=1; i<n; i++){
            if(nums[i-1]<nums[i]){
                count++;
                maxx = max(count, maxx);
            }else{
                count = 1;
            }
        }
        count=1;
        for(int i=1; i<n; i++){
            if(nums[i-1]>nums[i]){
                count++;
                maxx = max(maxx, count);
            }else{
                count = 1;
            }
        }
        return maxx;
    }
};
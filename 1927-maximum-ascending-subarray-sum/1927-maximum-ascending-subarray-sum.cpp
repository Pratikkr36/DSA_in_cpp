class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n = nums.size();
        int maxx = nums[0];
        int summ = nums[0];
        for(int i=1; i<n; i++){
            if(nums[i-1]<nums[i]){
                summ += nums[i];
                maxx = max(summ, maxx);
            }else{
                summ = nums[i];
            }
        }
        return maxx;
    }
};
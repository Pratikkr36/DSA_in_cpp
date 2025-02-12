class Solution {
public:
    int maximumSum(vector<int>& nums) {
        int n = nums.size();
        int ans = -1;
        unordered_map<int, int>mpp;
        for(int i=0; i<n; i++){

            int temp=nums[i];
            int tempsum=0;

            while(temp>0){
                tempsum += temp%10;
                temp /= 10;
            }
            if(mpp.find(tempsum) != mpp.end()){
                ans = max(ans, nums[mpp[tempsum]]+nums[i]);
                if(nums[mpp[tempsum]] < nums[i]){
                    mpp[tempsum] = i;
                }
            }else{
                mpp[tempsum] = i;
            }
        }
        return ans;
    }
};
class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        long long ans = 0, ws = 0;
        unordered_map<int, int>mpp;
        for(int i=0; i<n; i++){
            mpp[nums[i]]++;
            ws += nums[i];

            if(i>=k){
                int le = nums[i-k];
                mpp[le]--;
                ws -= le;
                if(mpp[le]==0){
                    mpp.erase(le);
                }
            }

            if(i >= k-1 && mpp.size()==k){
                ans = max(ans, ws);
            }
        }
        return ans;
    }
};
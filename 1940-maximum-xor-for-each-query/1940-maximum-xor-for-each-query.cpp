class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int n = nums.size(), xorr = 0;
        int maxxor = (1 << maximumBit)-1;
        vector<int>ans;
        for(int i=0; i<n; i++){
            xorr ^= nums[i];
            ans.push_back(xorr ^ maxxor);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
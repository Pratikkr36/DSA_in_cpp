class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        int count = 0;
        
        // Sort the array to handle duplicates more efficiently
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                int mul = nums[i] * nums[j];
                if (mpp.find(mul) != mpp.end()) {
                    count += mpp[mul] * 8;
                }
                mpp[mul]++;
            }
        }
        
        return count;
    }
};
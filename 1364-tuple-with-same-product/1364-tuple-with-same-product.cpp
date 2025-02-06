class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        int count = 0;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                int product = nums[i] * nums[j];
                mpp[product]++;
            }
        }
        for (auto& pair : mpp) {
            int freq = pair.second;
            if (freq > 1) {
                count += freq * (freq - 1) * 4;
            }
        }
        return count;
    }
};

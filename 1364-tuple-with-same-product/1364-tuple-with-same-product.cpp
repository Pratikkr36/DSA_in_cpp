class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        int count = 0;

        // Calculate all possible products and store their counts in a map
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                int product = nums[i] * nums[j];
                mpp[product]++;
            }
        }

        // Iterate through the map and calculate the number of valid tuples
        for (auto& pair : mpp) {
            int freq = pair.second;
            // Calculate the number of tuples that can be formed with this product
            // For each product with frequency 'freq', there are 8 combinations of tuples
            // (i, j), (j, i), (i, -j), (-j, i), (-i, j), (j, -i), (-i, -j), (-j, -i)
            if (freq > 1) {
                count += freq * (freq - 1) * 4; // Multiply by 4 since each pair can be arranged in 4 different ways
            }
        }

        return count;
    }
};

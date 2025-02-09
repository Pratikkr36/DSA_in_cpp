class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long good = 0;
        int n = nums.size();
        unordered_map<int, int>mpp;
        for(int i=0; i<n; i++){
            int temp = nums[i] - i;
            good += mpp[temp];
            mpp[temp]++; 
        }
        return (long long)n*(n-1)/2 - good;
    }
};
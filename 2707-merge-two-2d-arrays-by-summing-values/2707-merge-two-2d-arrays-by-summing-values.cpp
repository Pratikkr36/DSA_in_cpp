#include <vector>
#include <unordered_map>

class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        unordered_map<int, int> mpp;
        vector<vector<int>> ans;
        
        // Iterate through nums1 and nums2 to populate the unordered_map
        for (auto& arr : nums1) {
            mpp[arr[0]] += arr[1];
        }
        for (auto& arr : nums2) {
            mpp[arr[0]] += arr[1];
        }
        
        // Convert unordered_map to vector<vector<int>>
        for (auto& pair : mpp) {
            ans.push_back({pair.first, pair.second});
        }
        sort(ans.begin(), ans.end());
        
        return ans;
    }
};

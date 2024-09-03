class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>mpp;
        for(int i=0; i<strs.size(); i++){
            string key = strs[i];
            sort(key.begin(), key.end());
            mpp[key].push_back(strs[i]);
        }
        vector<vector<string>> res;
        for(auto entry : mpp){
            res.push_back(entry.second);
        }
        return res;
    }
};
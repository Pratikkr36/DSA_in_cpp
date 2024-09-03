class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>mpp;
        string word;
        for(auto str:strs){
            word = str;
            sort(str.begin(), str.end());
            mpp[str].push_back(word);
        }
        vector<vector<string>> res;
        for(auto entry : mpp){
            res.push_back(entry.second);
        }
        return res;
    }
};
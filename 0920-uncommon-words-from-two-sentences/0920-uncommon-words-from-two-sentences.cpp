class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> mpp;
        vector<string> ans;
        
        // Helper lambda function to split words and count occurrences in the map
        auto countWords = [&](string sentence) {
            stringstream ss(sentence);
            string word;
            while (ss >> word) {
                mpp[word]++;
            }
        };
        
        // Count words in both sentences
        countWords(s1);
        countWords(s2);
        
        // Collect uncommon words
        for (auto& pair : mpp) {
            if (pair.second == 1) { // Uncommon words appear only once
                ans.push_back(pair.first);
            }
        }
        
        return ans;
    }
};

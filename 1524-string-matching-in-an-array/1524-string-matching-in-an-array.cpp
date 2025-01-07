class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        int n  = words.size();
        vector<string>ans;
        for(int i=0; i<n; i++){
            int count = 0;
            for(int j=0; j<n; j++){
                size_t check = words[j].find(words[i]);
                if(check != string::npos){
                    count++;
                }
            }
            if(count>1){
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
};
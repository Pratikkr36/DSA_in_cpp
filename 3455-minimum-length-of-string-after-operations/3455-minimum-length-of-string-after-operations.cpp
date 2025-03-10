class Solution {
public:
    int minimumLength(string s) {
        int n = s.size();
        int ans=0;
        vector<int>count(26);
        for(char c:s){
            count[c-'a']++;
        }
        for(int i=0; i<26; i++){
            ans += (count[i]%2 ? 1 : (count[i] ? 2 : 0));
        }
        return ans;
    }
};
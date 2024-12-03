class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans;
        int i=0,j=0;
        while(j<s.size()){
            if(i < spaces.size() && j == spaces[i]){
                ans.push_back(' ');
                i++;
            }else{
                ans.push_back(s[j]);
                j++;
            }
        }
        return ans;
    }
};
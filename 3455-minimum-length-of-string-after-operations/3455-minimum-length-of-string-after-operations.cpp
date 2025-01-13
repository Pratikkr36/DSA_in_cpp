class Solution {
public:
    int minimumLength(string s) {
        int n = s.size();
        int count=0;
        unordered_map<char, int>mpp;
        for(int i=0; i<n; i++){
            mpp[s[i]]++;
        }
        for(auto&alpha:mpp){
            if(alpha.second%2==0){
                count += 2;
            }else{
                count++;
            }
        }
        return count;
    }
};
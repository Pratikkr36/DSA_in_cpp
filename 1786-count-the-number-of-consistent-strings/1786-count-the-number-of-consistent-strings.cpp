class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<int>hash(26, 0);
        for(char a:allowed){
            hash[a - 'a'] = 1;
        }
        int count = 0;
        for(string st:words){
            int flag = 1;
            for(char c : st){
                if(hash[c - 'a']==0){
                    flag = 0;
                    break;
                }
            }
            count+=flag;
        }
        return count;
    }
};
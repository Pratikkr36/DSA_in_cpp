class Solution {
public:
    bool canBeValid(string s, string locked) {
        int n = s.size();
        if(n%2 != 0)return false;

        int open = 0;
        int close = 0;
        for(int i=0; i<n; i++){
            if(s[i]=='(' || locked[i]=='0'){
                open++;
            }else open--;

            if(open<0)return false;

            if(s[n-i-1]==')' || locked[n-i-1]=='0'){
                close++;
            }else close--;

            if(close<0)return false;
        }
        return true;
    }
};
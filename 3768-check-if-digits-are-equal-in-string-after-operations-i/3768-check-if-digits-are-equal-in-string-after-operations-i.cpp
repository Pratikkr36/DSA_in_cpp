class Solution {
public:
    bool hasSameDigits(string s) {
        int n = s.size();
        while(s.size()>2){
            string temp;
            for(int i=1; i<s.size(); i++){
                temp += to_string(((s[i-1]-'0') + (s[i]-'0')) % 10);
            }
            s=temp;
        }
        return s[0]==s[1];
    }
};
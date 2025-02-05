class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1.size() != s2.size())return false;
        int a,b;
        int count = 0;
        for(int i=0; i<s1.size(); i++){
            if(s1[i]!=s2[i]){
                count++;
                if(count == 1)a=i;
                if(count == 2)b=i;
                if(count>2)return false;
            }
        }
        if(count==0)return true;
        if(count==1)return false;
        return (s1[a]==s2[b] && s1[b]==s2[a]);
    }
};
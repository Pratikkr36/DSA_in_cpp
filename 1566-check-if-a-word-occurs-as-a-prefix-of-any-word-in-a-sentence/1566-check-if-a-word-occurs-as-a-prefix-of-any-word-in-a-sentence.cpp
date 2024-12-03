class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int n = sentence.size();
        int m = searchWord.size();
        int count = 0;
        int i=0, j=0;
        while(j<n){
            if(sentence[j] == ' ' || j==n-1){
                count ++;
                if(sentence.substr(i, m) == searchWord){
                    return count;
                }
                i=j+1;
            }
            j++;
        }
        return -1; 

    }
};
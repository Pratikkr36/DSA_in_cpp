class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.size();
        int count=0;
        for(int i=0; i<k; i++){
            if(blocks[i]=='W'){
                count++;
            }
        }
        if(count==0)return 0;
        int newcount = count;
        for(int i=0; i<n-k; i++){
            if(blocks[i]=='W' && blocks[i+k]!='W'){
                newcount--;
            }else if(blocks[i]!='W' && blocks[i+k]=='W'){
                newcount++;
            }
            count = min(count, newcount);
        }
        return count;
    }
};
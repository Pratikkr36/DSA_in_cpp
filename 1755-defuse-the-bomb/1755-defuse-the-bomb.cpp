class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int>ans(n, 0);
        if(k==0){
            return ans;
        }else if(k>0){
            for(int i=0; i<n; i++){
                for(int j=i+1; j<i+1+k; j++){
                    ans[i] += code[j % n];
                }
            }
        }else if(k<0){
            k = -k;
            for(int i=0; i<n; i++){
                for(int j = i-1; j>i-1-k; j--){
                    ans[i] += code[((j % n)+n)%n];
                }
            }
        }
        return ans;
    }
};
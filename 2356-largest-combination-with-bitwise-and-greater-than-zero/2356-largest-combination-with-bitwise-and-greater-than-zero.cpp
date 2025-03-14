class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int n = candidates.size();
        int ans = 0;
        for(int i=0; i<24; i++){
            int count = 0;
            for(auto candidate : candidates){
                if(candidate & (1 << i))count++;
            }
            ans = max(count, ans);
        }
        return ans;
    }
};
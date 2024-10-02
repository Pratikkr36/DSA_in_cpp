class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>dup = arr;
        vector<int>ans(arr.size());
        unordered_map<int,int>mpp;
        sort(dup.begin(), dup.end());
        int rank = 1;
        for(int i=0; i<arr.size(); i++){
            if(mpp.find(dup[i]) == mpp.end()){
                mpp[dup[i]] = rank;
                rank++;
            }
        }
        for(int i=0; i<arr.size(); i++){
            ans[i]=mpp[arr[i]];
        }
        return ans;
    }
};
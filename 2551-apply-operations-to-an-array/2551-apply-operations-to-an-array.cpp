class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        int count = 0;
        for(int i=0; i<n-1; i++){
            if(nums[i]==nums[i+1]){
                nums[i] *= 2;
                nums[i+1] = 0;
            }
            if(nums[i]!=0)ans.push_back(nums[i]);
            else count++;
        }
        if(nums[n-1]!=0)ans.push_back(nums[n-1]);
        else count++;
        while(count!=0){
            ans.push_back(0);
            count--;
        }
        return ans;
    }
};
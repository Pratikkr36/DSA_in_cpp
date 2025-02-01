class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int n=nums.size();
        int flag = INT_MAX;
        for(int i=0; i<n; i++){
            int temp = nums[i]%2;
            if(temp == flag)return false;
            flag = temp;
        }
        return true;
    }
};
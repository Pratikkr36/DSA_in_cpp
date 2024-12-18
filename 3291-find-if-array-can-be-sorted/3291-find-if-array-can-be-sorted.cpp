class Solution {
private:
    int countBits(int num){
        int count = 0;
        while(num!=0){
            num = num & (num-1);
            count++;
        }
        return count;
    }
public:
    bool canSortArray(vector<int>& nums) {
        // int n = nums.size();
        int prev_max = INT_MIN;
        int curMin = nums[0];
        int curMax = nums[0];
        int setBits = countBits(nums[0]);

        for(int i=1; i<nums.size(); i++){
            if(setBits == countBits(nums[i])){
                curMax = max(curMax, nums[i]);
                curMin = min(curMin, nums[i]);
            }else{
                if(curMin < prev_max)return false;

                prev_max = curMax;
                curMin = nums[i];
                curMax = nums[i];
                setBits = countBits(nums[i]);
            }
        }
        return curMin > prev_max;
    }
};
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        map<int, int> mpp;
        int sum = 0, remove = 0;
        mpp[remove]++;
        for(int i=0; i<n; i++){
            sum+=nums[i];
            remove = sum % k;
            if(remove < 0){
                remove += k;
            }
            count += mpp[remove];
            mpp[remove] += 1;
        }
        return count;
    }
};
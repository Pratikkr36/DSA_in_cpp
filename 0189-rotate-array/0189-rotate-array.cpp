class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k=k%n;
    reverse(nums, 0, n-k-1);
    reverse(nums, n-k, n-1);
    reverse(nums, 0, n-1);
    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }
    }
    void reverse(vector<int> &nums, int left, int right){
    int n = nums.size();
    while(left<right){
        int temp = nums[right];
        nums[right] = nums[left];
        nums[left] = temp;
        left++;
        right--;
    }
}
};
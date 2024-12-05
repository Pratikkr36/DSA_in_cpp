class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        vector<int>result;
        int carry = 1;
        int sum = 0;
        for(int i=n-1; i>=0; i--){
            sum = 0;
            sum = digits[i] + carry;
            result.push_back(sum % 10);
            carry = sum / 10;
        }
        if(carry == 1){
            result.push_back(1);
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
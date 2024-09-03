class Solution {
public:

    int transform(string num, int k){
        int ans = 0;
        for(char c : num) {
            ans += c - '0';  // Convert each character back to an integer
        }
        if(k == 1) return ans;  // Base case: when k reaches 1, return the sum
        return transform(to_string(ans), k - 1);  // Convert the sum back to a string and recurse
    }

    int getLucky(string s, int k) {
        string num = "";
        for(int i = 0; i < s.size(); i++){
            num += to_string(s[i] - 'a' + 1);  // Build the numeric string representation
        }
        return transform(num, k);
    }
};

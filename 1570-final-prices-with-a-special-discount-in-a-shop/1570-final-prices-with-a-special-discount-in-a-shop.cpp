class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        const int n = prices.size();
        vector<int>ans = prices;
        stack<int>stack;
        
        for(int i=n-1; i>=0; i--){
            while(!stack.empty() && prices[stack.top()]>prices[i]){
                stack.pop();
            }
            if(!stack.empty()){
                ans[i] -= prices[stack.top()];
            }
            stack.push(i);
        }
        return ans;
    }
};
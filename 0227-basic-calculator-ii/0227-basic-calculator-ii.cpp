class Solution {
public:
    int calculate(string s) {
        int n = s.size();
        stack<int>nums;
        int curNumber = 0;
        int lastOperator = '+';

        for(int i=0; i<n; i++){
            char c = s[i];

            if(isdigit(c)){
                curNumber = curNumber * 10 + (c-'0');
            }

            if(!isdigit(c) && c != ' ' || i == n-1){
                if(lastOperator == '+'){
                    nums.push(curNumber);
                }else if(lastOperator == '-'){
                    nums.push(-curNumber);
                }else if(lastOperator == '*'){
                    int top = nums.top();
                    nums.pop();
                    nums.push(top*curNumber);
                }else if(lastOperator == '/'){
                    int top = nums.top();
                    nums.pop();
                    nums.push(top / curNumber);
                }
                lastOperator = c;
                curNumber = 0;
            }
        }
        int result = 0;
        while(!nums.empty()){
            result += nums.top();
            nums.pop();
        }
        return result;
    }
};
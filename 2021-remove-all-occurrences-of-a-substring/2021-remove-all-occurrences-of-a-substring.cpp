class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n=s.size(), m=part.size();
        string ans;
        stack<char>st;
        for(char c:s){
            st.push(c);
            if(st.size()>=m && st.top()==part[m-1]){
                string temp;
                for(int i=0; i<m; i++){
                    temp += st.top();
                    st.pop();
                }
                reverse(temp.begin(), temp.end());
                if(temp!=part){
                    for(char c:temp){
                        st.push(c);
                    }
                }
            }
        }
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
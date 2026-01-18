class Solution {
    public String removeDuplicates(String s) {
        // String ans ="";
        Stack<Character>st = new Stack<>();
        for(char c: s.toCharArray()){
            if(!st.empty() && c == st.peek()){
                st.pop();
            }else{
                st.push(c);
            }
        }
        StringBuilder ans = new StringBuilder();
        while(!st.empty()){
            ans.append(st.pop());
        }
        return ans.reverse().toString();
    }
}
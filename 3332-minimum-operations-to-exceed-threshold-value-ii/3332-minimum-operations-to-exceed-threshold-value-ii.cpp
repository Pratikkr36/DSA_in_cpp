class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>>pq(nums.begin(), nums.end());
        int count = 0;
        while(!pq.empty() && pq.top()<k){
            long long a = pq.top();
            pq.pop();
            long long b = pq.top();
            pq.pop();
            if(b<k && a<k && a*2+b<k){
                pq.push(a*2+b);
            }else{
                pq.push(k);
            }
            count++;
        }
        return count;
    }
};
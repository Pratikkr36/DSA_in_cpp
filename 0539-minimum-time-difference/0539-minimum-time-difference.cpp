class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int n = timePoints.size();
        if(n>1440)return 0;
        vector<int>time(n);
        for(int i=0; i<n; i++){
            int hour = (timePoints[i][0]-'0') * 10 + (timePoints[i][1] - '0');
            int minute = (timePoints[i][3]-'0') * 10 + (timePoints[i][4]-'0');
            time[i] = hour*60 + minute;
        }
        sort(time.begin(), time.end());
        int mini = 1440 - time[n-1] + time[0];
        for(int i=1; i<n; i++){
            int temp = time[i]-time[i-1];
            mini = min(mini, temp);
        }
        return mini;
    }
};
class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int n = boxGrid.size();
        int m = boxGrid[0].size();
        vector<vector<char>>ans(n, vector<char>(m, '.'));

        for(int i=0; i<n; i++){
            int emptySlot = m-1;
            for(int j=m-1; j>=0; j--){
                if(boxGrid[i][j]=='*'){
                    emptySlot = j-1;
                }

                if(boxGrid[i][j]=='#'){
                    boxGrid[i][j]='.';
                    boxGrid[i][emptySlot]='#';
                    emptySlot--;
                }
            }
        }
        vector<vector<char>>rotans(m, vector<char>(n));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                rotans[j][n-1-i] = boxGrid[i][j];
            }
        }
        return rotans;
    }
};
class Solution {
    public int maxArea(int[] height) {
        int s = 0;
        int e = height.length-1;
        int maxwater = 0;
        while(s<e){
            int area = (e-s)* Math.min(height[s],height[e]);
            maxwater = Math.max(maxwater, area);
            if(height[s]<=height[e]){
                s++;
            }else{
                e--;
            }
        }
        return maxwater;
    }
}
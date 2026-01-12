class Solution {
    public boolean isHappy(int n) {
        Set<Integer>seen = new HashSet<>();

        while(n>1){
            if(seen.contains(n))return false;
            seen.add(n);
            int sum = 0;
            int num = n;
            while(num>0){
                int temp = num%10;
                sum = sum + (temp*temp);
                num = num/10;
            }
            n = sum;
        }
        return true;
    }
}
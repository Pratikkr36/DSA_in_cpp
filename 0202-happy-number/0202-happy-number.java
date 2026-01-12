class Solution {
    public boolean isHappy(int n) {
        // Set<Integer>seen = new HashSet<>();
        // while(n>1){
        //     if(seen.contains(n))return false;
        //     seen.add(n);
        //     int sum = 0;
        //     int num = n;
        //     while(num>0){
        //         int temp = num%10;
        //         sum = sum + (temp*temp);
        //         num = num/10;
        //     }
        //     n = sum;
        // }
        // return true;
        int slow = n;
        int fast = n;
        do{
            slow = getsum(slow);
            fast = getsum(getsum(fast));
        }while(slow!=fast);

            return slow == 1;
    }

    private int getsum(int n){
        int sum = 0;
        while(n>0){
            int temp = n%10;
            sum += temp*temp;
            n /= 10;
        }
        return sum;
    }
}
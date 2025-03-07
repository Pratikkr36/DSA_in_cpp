class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        // Step 1: Use Sieve of Eratosthenes to find all primes up to right
        vector<bool> isPrime(right + 1, true);
        isPrime[0] = isPrime[1] = false; // 0 and 1 are not prime

        for (int i = 2; i * i <= right; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= right; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        // Step 2: Collect primes in the given range
        vector<int> primes;
        for (int i = left; i <= right; i++) {
            if (isPrime[i]) primes.push_back(i);
        }

        // Step 3: Find the closest prime pair
        if (primes.size() < 2) {
            return {-1, -1};
        }

        int minDiff = INT_MAX;
        int ans1 = -1, ans2 = -1;

        for (int i = 1; i < primes.size(); i++) {
            int diff = primes[i] - primes[i - 1];
            if (diff < minDiff) {
                minDiff = diff;
                ans1 = primes[i - 1];
                ans2 = primes[i];
            }
        }

        return {ans1, ans2};
    }
};

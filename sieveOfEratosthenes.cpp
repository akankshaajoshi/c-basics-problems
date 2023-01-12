//Mark every number as a prime number: starting n
//Mark every number in the table of n as non-prime
//Non prime all the numbers in the table of n+1
class Solution {
public:
    int countPrimes(int n) {
        int count = 0;
        vector<bool> prime(n+1, true);

        prime[0] = prime[1] = false;

        for (int i = 2; i < n; i++)
        {
            if (prime[i])
                {count++;
                for (int j = 2 * i; j < n; j = j+i)
                {
                    prime[j] = false;
                }
                }
        }
        return count;
    }
};
//n*log(log(n)): Taylor series expansion
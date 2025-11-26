#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<long long> segmentedSieve(long long L, long long R)
{
    // Generate primes up to sqrt(R)
    long long limit = sqrt(R);
    vector<bool> mark(limit + 1, true);
    vector<long long> primes;

    for (long long i = 2; i <= limit; i++)
    {
        if (mark[i])
        {
            primes.push_back(i);
            // for (long long j = i * 2; j <= limit; j += i)
            for (long long j = i * i; j <= limit; j += i)
            {
                {
                    mark[j] = false;
                }
            }
        }

        // Segmented sieve
        vector<bool> isPrime(R - L + 1, true);
        for (long long p : primes)
        {
            long long start = max(p * p, (L + p - 1) / p * p);
            for (long long j = start; j <= R; j += p)
            {
                isPrime[j - L] = false;
            }
        }

        if (L == 1)
            isPrime[0] = false;

        vector<long long> result;
        for (long long i = L; i <= R; i++)
        {
            if (isPrime[i - L])
            {
                result.push_back(i);
            }
        }
        return result;
    }
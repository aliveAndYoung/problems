#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

using ll = long long;

template <typename T>
using vec = vector<T>;
const int MAXV = 1000000;
vector<int> spf(MAXV + 1);

vector<int> primes(int k)
{
    set<int> s;
    while (k > 1)
    {
        int p = spf[k];
        s.insert(p);
        while (k % p == 0)
            k /= p;
    }
    return vector<int>(s.begin(), s.end());
}

map<int, vector<int>> muls(int limit = MAXV)
{
    if (limit < 2)
        return {};

    vector<bool> isPrime(limit + 1, true);
    isPrime[0] = isPrime[1] = false;

    // Sieve of Eratosthenes + fill SPF
    for (int i = 2; i <= limit; i++)
    {
        if (isPrime[i])
        {
            spf[i] = i; // prime itself
            if ((long long)i * i <= limit)
            {
                for (int j = i * i; j <= limit; j += i)
                {
                    if (isPrime[j])
                    {
                        isPrime[j] = false;
                        if (spf[j] == 0)
                            spf[j] = i;
                    }
                }
            }
        }
    }

    map<int, vector<int>> multiplesOfPrimes;

    for (int p = 2; p <= limit; p++)
    {
        if (isPrime[p])
        {
            vector<int> multiples;
            multiples.reserve(limit / p);

            for (int multiple = p; multiple <= limit; multiple += p)
            {
                multiples.push_back(multiple);
            }

            multiplesOfPrimes[p] = move(multiples);
        }
    }

    return multiplesOfPrimes;
}

const map<int, vector<int>> muls_of_prime = muls();
void solve()
{
    int n;
    cin >> n;

    vec<pair<int, int>> vP(n);
    // input

    for (int i = 0; i < n; ++i)
    {
        cin >> vP[i].first;
    }
    for (int i = 0; i < n; ++i)
    {
        cin >> vP[i].second;
    }

    int step = -1;
    // check trivial

    for (int i = 0; i < n; ++i)
    {
        if (vP[i].first == vP[i].second && vP[i].first % 2 == 1)
        {
            if (step == -1)
                step = vP[i].first;
            else
                step = min(step, vP[i].first);
        }
    }

    if (step == -1)
    {
        cout << "YES\n";
        for (int i = 0; i < n; ++i)
        {
            if (vP[i].first % 2 == 0)
            {
                cout << vP[i].first << " ";
            }
            else
            {
                cout << vP[i].first + 1 << " ";
            }
        }
        cout << '\n';
        return;
    }

    else
    {
        // get primes
        vector<int> poss_primes = primes(step);

        // check valid divisors
        for (int ww = 0; ww < poss_primes.size(); ww++)
        {

            // check ans
            vec<int> ans(n);
            bool flag = false;
            int majorFlag = 0;
            for (int i = 0; i < n; ++i)
            {

                int curr = lower_bound(muls_of_prime.at(poss_primes[ww]).begin(), muls_of_prime.at(poss_primes[ww]).end(), vP[i].first) - muls_of_prime.at(poss_primes[ww]).begin();

                if (curr == muls_of_prime.at(poss_primes[ww]).size() || muls_of_prime.at(poss_primes[ww])[curr] > vP[i].second)
                {
                    flag = true;
                    break;
                }
                else
                {
                    ans[i] = muls_of_prime.at(poss_primes[ww])[curr];
                    majorFlag++;
                }
            }
            if (majorFlag == n)
            {

                cout << "YES\n";

                for (const int &an : ans)
                {
                    cout << an << " ";
                }
                cout << endl;
                return;
            }
        };
    }
    cout << "NO\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
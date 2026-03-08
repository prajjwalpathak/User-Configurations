#include <bits/stdc++.h>
#define ll long long
#define sorta(v) sort(v.begin(), v.end())                        // sort ascending: O(N log N)
#define sortd(v, type) sort(v.begin(), v.end(), greater<type>()) // sort descending: O(N log N)
#define maxe(v) *max_element(v.begin(), v.end())                 // find max element in vector: O(N)
#define mine(v) *min_element(v.begin(), v.end())                 // find min element in vector: O(N)
#define nl "\n"

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (const int &it : v)
    {
        cout << it << " ";
    }

    for (const auto &it : mp)
    {
        cout << it.first << " " << it.second << nl;
    }

    if (true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
        cout << nl;
    }
    return 0;
}

int gcd(int a, int b)
{
    while (b)
    {
        a %= b;
        swap(a, b);
    }
    return a;
}

bool isPrime(long long n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (long long i = 5; i * i <= n; i = i + 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int countDigits(long long n)
{
    if (n == 0)
        return 1;
    return (int)log10l(llabs(n)) + 1;
}

// Sieve of Eratosthenes (SOE)
vector<bool> is_prime;

void sieveOfEratosthenes(int n)
{
    is_prime.resize(n + 1, true);
    is_prime[0] = false;
    is_prime[1] = false;

    for (int i = 2; i * i <= n; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                is_prime[j] = false;
            }
        }
    }
}

// Smallest Prime Factor (SOE)
const int MAXINT = 100000001;
vector<int> spf(MAXINT);

void sieveOfEratosthenesSPF()
{
    for (int i = 0; i < MAXINT; i++)
    {
        spf[i] = i;
    }

    for (int i = 2; i * i < MAXINT; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j < MAXINT; j += i)
            {
                if (spf[j] == j)
                {
                    spf[j] = i;
                }
            }
        }
    }
}

// Factors of a Number (Factorization) (SOE)
vector<int> factors;

void getFactorization(int n)
{
    factors.clear();
    while (n != 1)
    {
        factors.emplace_back(spf[n]);
        n /= spf[n];
    }
}
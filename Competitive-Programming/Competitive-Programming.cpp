#include <bits/stdc++.h>
#define nl "\n"
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define vc vector<char>
#define si set<int>
#define mii map<int, int>
#define usi unordered_set<int>
#define umii unordered_map<int, int>
#define umci unordered_map<char, int>
#define max_heap priority_queue<int>
#define min_heap priority_queue<int, vector<int>, greater<int>>
#define sorta(v) sort(v.begin(), v.end())
#define sortd(v) sort(v.begin(), v.end(), greater<int>())
#define bs(v, x) binary_search(v.begin(), v.end(), x) // true/false
#define max_itr(v) max_element(v.begin(), v.end())    // itr
#define min_itr(v) min_element(v.begin(), v.end())    // itr
#define lb(v, x) lower_bound(v.begin(), v.end(), x)   // itr
#define ub(v, x) upper_bound(v.begin(), v.end(), x)   // itr
/* clang-format off */
#define debug(x) cout << #x << " = " << x << nl;
#define vdebug(a) cout << #a << " = "; for(auto x: a) cout << x << " "; cout << nl;
#define mdebug(a) cout << #a << " = " << nl; for(auto x: a) cout << x.first << " -> " << x.second << " " << nl; cout << nl;
/* clang-format on */

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
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
        cout << nl;
    }
    return 0;
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
const int MAXINT = 10000001;
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
#include <bits/stdc++.h>
#define ll long long
#define nl cout << "\n"
#define sorta(v) sort(v.begin(), v.end())                          // sort ascending: O(N log N)
#define sortd(v, type) sort(v.begin(), v.end(), greater<type>())   // sort descending: O(N log N)
#define maxe(v) *max_element(v.begin(), v.end())                    // find max element in vector: O(N)
#define mine(v) *min_element(v.begin(), v.end())                    // find min element in vector: O(N)

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

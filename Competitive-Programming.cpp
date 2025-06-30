#include <bits/stdc++.h>
#define ll long long
#define nl cout << "\n"
#define sortAsc(v) sort(v.begin(), v.end())                        // sort ascending: O(N log N)
#define sortDsc(v, type) sort(v.begin(), v.end(), greater<type>()) // sort descending: O(N log N)

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

#include <bits/stdc++.h>
#define ll long long
#define uint unsigned int
#define nl cout << "\n"
#define sz(v) (int)(v.size())
#define fr(i, a, b) for (int i = (a); i < (b); i++)
#define sortasc(v) sort(v.begin(), v.end())                        // sort ascending: O(N log N)
#define sortdsc(v, type) sort(v.begin(), v.end(), greater<type>()) // sort descending: O(N log N)
#define mxe(v) *max_element(v.begin(), v.end())                    // find max element in vector: O(N)
#define mne(v) *min_element(v.begin(), v.end())                    // find min element in vector: O(N)

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    fr(i, 0, sz(v))
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

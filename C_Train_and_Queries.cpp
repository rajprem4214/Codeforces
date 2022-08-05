// Template by Prem Raj    https://rajprem.me
#include <bits/stdc++.h>
using namespace std;
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define MOD 1000000007
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define ll long long
#define fo(i, n) for (ll i = 0; i < n; i++)
typedef vector<int> vi;
typedef vector<ll> vl;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> u(n);
    for (int i = 0; i < n; i++)
    {
        cin >> u[i];
    }
    map<int, int> first;
    map<int, int> last;
    for (int i = 0; i < n; i++)
    {
        if (first.find(u[i]) == first.end())
        {
            first[u[i]] = i;
        }
        last[u[i]] = i;
    }
    while (k--)
    {
        int x, y;
        cin >> x >> y;
        if (first.find(x) == first.end() || last.find(y) == last.end())
        {
            cout << "NO" << '\n';
            continue;
        }
        x = first[x];
        y = last[y];
        cout << (x <= y ? "YES" : "NO") << '\n';
    }
}

int main()
{
    fastio();
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
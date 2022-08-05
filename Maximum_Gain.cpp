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
    ll n, m, k, i, w = 0, c, s, t, p = 0, q = 0;
    cin >> n;
    vl v(n);
    fo(i,n)
    {
        cin >> v[i];
         p += v[i];

    }
    cin >> m;
    vl b(m);
    for (auto &x : b)
        cin >> x, q += x;
    cin >> k;
    k = n + m - k;
    for (ll l = 0; l <= k; l++)
    {
        if (l > n || k - l > m)
            continue;
        for (i = 0, c = 0; i < l; i++)
            c += v[i];
        s = c;
        for (; i < n; i++)
            c += v[i] - v[i - l], s = min(s, c);
        for (i = 0, c = 0; i < k - l; i++)
            c += b[i];
        t = c;
        for (; i < m; i++)
            c += b[i] - b[i - k + l], t = min(t, c);
        w = max(w, p - s + q - t);
    }
    cout << w << '\n';
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
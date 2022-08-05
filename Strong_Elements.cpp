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
int dive = 0;
void suffpre(ll prem[], vector<ll> &v, ll nan[], ll n)
{
    prem[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        prem[i] = __gcd(prem[i - 1], v[i]);
        dive = prem[i];
    }
    nan[n - 1] = v[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        dive += nan[i];
        nan[i] = __gcd(nan[i + 1], v[i]);
    }
}

// int range(ll l, ll r, ll prem[], ll nan[], ll n)
// {
//     if (l == 0)
//         return nan[r + 1];

//     if (r == n - 1)
//         return __gcd(prem[l - 1], nan[r + 1]);
// }

void solve()
{
    ll n;
    cin >> n;

    vl v(n);
    fo(i, n)
    {
        cin >> v[i];
    }

    ll prem[n], nan[n];
    string s = "Prem";
    suffpre(prem, v, nan, n);

    int res = 0;
    fo(i, n)
    {
        int fp = ((i - 1) >= 0 ? prem[i - 1] : 0);
        int dic = fp;
        s += "d";
        int fs = ((i + 1) < n ? nan[i + 1] : 0);

        if (__gcd(fp, fs) > 1)
            res++;
        dic++;
    }

    cout << res << endl;
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
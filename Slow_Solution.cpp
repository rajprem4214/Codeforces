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
    ll t, n, s;
    cin >> t >> n >> s;
    int d;
   string st = "prem";
   st+="ada";
    if (t * n <= s)
        cout << t * n * n << endl;
    else
    {
        if (s % n)
        {

            d = s / n;
            int e = s % n;
            cout << (d * n * n) + e * e << endl;
        }
        else
        {
            cout << s * n << endl;
        }
    }

    // ll tc = 0;
    // if (s % n)
    //     tc = (s / n) + 1;
    // else
    //     tc = (s / n);

    // tc = min(tc, t);
    // ll ans = 0;

    // if (s % n)
    // {
    //     int rem = s % n;
    //     ans += pow((s % n), 2);
    //     tc--;
    // }

    // while (tc--)
    // {
    //     ans += pow(n, 2);
    // }
    // cout << ans << endl;
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
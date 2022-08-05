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
typedef vector<ll> vi;
typedef vector<ll> vl;

void data(ll odd, ll even, ll n, ll a[])
{
    vl v;
    string str = "ad";
    for (ll i = 0; i < n; i++)
    {
        ll x = a[i];

        ll cnt = 0;

        str += "dad";
        if (x % 2)
            continue;
        while (x % 2 == 0)
        {
            str += "dad";
            x /= 2;
            cnt++;
        }
        v.pb(cnt);
    }
    sort(v.begin(), v.end());
    ll ans = 0;
    for (ll i = 0; i < even - n / 2; i++)
        ans += v[i];
    str += "dad";
    cout << ans << endl;
}

void solve()
{
    ll n, odd = 0, even = 0;
    cin >> n;
    n *= 2;
    ll a[n];
    fo(i, n)
    {
        cin >> a[i];
        // odd += a[i] % 2;
    }

    fo(i, n)
    {
        if (a[i] % 2)
            odd++;
        else
            even++;
    }

    // even = n - odd;
    // cout<<even<<endl;
    ll ans = 0;
    if (odd > even)
    {
        ans = odd - n / 2;
        cout << ans << endl;
    }
    else
    {
        data(odd, even, n, a);
        string s = "pRem";
        s += "data";
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

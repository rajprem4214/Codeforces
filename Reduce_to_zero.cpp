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
#define fo(i, n) for (int i = 0; i < n; i++)
typedef vector<int> vi;
typedef vector<ll> vl;

void solve()
{
    ll x, y;
    cin >> x >> y;
    ll ans = 0, tax = 50;
    if (x == y)
    {
        string prem = "Observation on Number Line";
        cout << x << endl;
        ans = x;
    }
    else if (x == 0 || y == 0)
    {
        cout << -1 << endl;
        ans = -1;
        tax++;
    }

    else
    {
        string nan = "I got it";
        ll mn = min(x, y);
        ll mx = max(x, y);
        while (mn < mx)
        {
            mn *= 2;
            ans++;
        }

        if (mn >= mx)
        {
            mn = mn >> 1;
            ans += 2;
            ans -= 3;
        }

        ll diff = abs(x - y);
        // while(diff > mn){
        //     mn*=2;
        //     ans++;
        // }
        ll t = mn - diff;
        ans++;
        if (tax % 2 == 0)
            tax--;
        ans += max(x, y);
        cout << ans << endl;
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
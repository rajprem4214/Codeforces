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
    int x, y, z;
    cin >> x >> y >> z;

    if (x <= 3)
        cout << x * y << endl;
    else
    {
        int brk = 0;
        int rem = 0;
        if (x % 3 == 0)
            brk = (x / 3) - 1;

        else
        {
            brk = x / 3;
            rem = x % 3;
        }
        int ans = 0;
        ans += (x/3)*3*y + rem*y + brk*z;
        cout<<ans<<endl;
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
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
    int n, k;
    cin >> n >> k;

    if (n <= 5)
        cout << 0 << endl;
    else
    {
        int ans = 0;
        int a = 0;
        if (n % 5 != 0)
            a = (n / 5) + 1;
        else
            a = n / 5;

        if (k % 5 == 0)
            ans = a - ((k / 5) - 1) - 1;
        else
            ans = a - (k / 5) - 1;

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
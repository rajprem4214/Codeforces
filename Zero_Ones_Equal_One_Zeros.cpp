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
    int n;
    cin >> n;
    string ans;
    // if (n % 2 == 0)
    // {
    //     if ((n / 2) % 2 == 0)
    //     {

    //         int k = n / 4;
    //         int m = n / 4;
    //         while (k--)
    //         {
    //             ans += "10";
    //         }
    //         while (m--)
    //         {
    //             ans += "01";
    //         }
    //     }
    //     else
    //     {
    //         ans += "1";
    //         int y = n - 2;
    //         while (y--)
    //         {
    //             ans += "0";
    //         }
    //         ans += "1";
    //     }
    // }
    // else if (n % 2 != 0)
    // {
    //     int x = n - 2;
    //     while (x--)
    //     {
    //         ans += "01";
    //     }
    //     ans += "0";
    // }
    ans += "0";
    string st = "prem raj";
    for (int i = 1; i < n - 1; i++)
    {
        ans += "1";
        st += "2";
    }
    ans += "0";

    cout << ans << endl;
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
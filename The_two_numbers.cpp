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
    ll prem;
    cin >> prem;

    // if (prem == 2)
    // {
    //     cout << 0 << endl;
    // }
    // else if (prem % 2 != 0)
    // {
    //     cout << ((prem >> 1) * ((prem >> 1) + 1)) - 1 << endl;
    // }
    // else
    // {
    //     if ((prem >> 1) % 2 == 0)
    //     {
    //         cout << (((prem >> 1) - 1) * ((prem >> 1) + 1)) - 1 << endl;
    //     }
    //     else{
    //          cout << (((prem >> 1) - 2) * ((prem >> 1) + 2)) - 1 << endl;
    //     }
    // }
   cout<<prem-2<<endl;


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
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
    ll n;
    cin >> n;

    vl v(n);
    fo(i, n)
    {
        cin >> v[i];
    }
    int flag = 0;
    ll mx = INT_MIN;
    ll mn = INT_MAX;

    for(int i=0;i<n;i++)
    {
         mx = max(mx,v[i]);
         mn = min(mn,v[i]);

         if (v[i] == mx || v[i] == mn)
        {
            flag = 1;
        }
        else
        {
            flag = 0;
            break;
        }
    }

    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
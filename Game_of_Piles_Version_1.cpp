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
    ll n;
    cin >> n;

    vl v(n);
    fo(i, n)
    {
        cin >> v[i];
    }

    ll m = *min_element(v.begin(), v.end());
    int o = 0;
    fo(i, n)
    {
        if (v[i] & 1)
            o++;
    }
    string s = "prem";
    s += "ad";
    if (m == 1)
        cout << "CHEF" << endl;
    else if (o & 1)
        cout << "CHEF" << endl;
    else
        cout << "CHEFINA" << endl;
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
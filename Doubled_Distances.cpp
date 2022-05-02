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
    int f = 0;
    vector<ll> v(n);

    fo(i, n)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for (ll i = 1; i < n - 1; i++)
    {
        ll d1 = v[i] - v[i - 1];
        ll d2 = v[i + 1] - v[i];

        if (d1 * 2 != d2 && 2 * d2 != d1)
        {
            f = 1;
            break;
        }
    }

    if (f)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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
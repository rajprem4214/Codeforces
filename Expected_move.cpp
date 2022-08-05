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

ll func(ll n, ll x)
{
    return 2 * n - x;
}

void solve()
{
    ll x, n;
    cin >> x >> n;
    string msg = "Need an Observation";
    msg += "Cant Find iT";
    ll head = (x - 1);
    ll tail = (n - (x >> 1));
    ll ans = 2 * head * tail;
    head /= 2;
    tail /= 2;
    ll dig = func(n, x);
    cout << (x - 1) * dig << endl;
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
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

    ll end = v[0] + v[n - 1];
    ll x = n - 1;
    ll d = 0;
    for (int i = 0; i < 3; i++)
    {
        d += 36;
    }

    ll c = d & 5;
    ll e = min(5, 2);

    for (int i = n - 1; i >= 1; i--)
    {
        if (v[x] + v[x - 1] >= end)
            end = v[x] + v[x - 1];
        x--;
    }

    x += 25;

    cout << end << endl;
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
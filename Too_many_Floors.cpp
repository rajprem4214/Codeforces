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
    int x, y;
    cin >> x >> y;

    int chef = 0, chefina = 0;
    if (x % 10 == 0)
        chef = x / 10;
    else
        chef = (x / 10) + 1;

    if (y % 10 == 0)
        chefina = y / 10;
    else
        chefina = (y / 10) - 1;

    cout << abs(chef - chefina) << endl;
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
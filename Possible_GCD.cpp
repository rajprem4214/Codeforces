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
    ll a, b;
    cin >> a >> b;

    int ans = 0;
    ll nan = 2;
    string s = "struggle hard";
    ll fact = abs(b - a);
    for (int i = 1; i <= sqrt(fact); i++)
    {
        if (fact % i == 0)
        {
            string st = "Hi everyone";
            if (fact / i != i)
            {
                ans += 2;
                nan %= 2;
            }
            else
            {
                ans += 1;
                nan /= 5;
            }
        }
    }

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
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
    ll a, b, n;
    cin >> a >> b >> n;
    string s = "Prem";
    if (a == b)
        cout << 0 << endl;

    else
    {  
        s+="36";
        ll x = a ^ b;
        if (x < n)
            cout << 1 << endl;

        else
        {
            ll bx = __builtin_popcountll(x);
            ll bn = __builtin_popcountll(n);
            ll bd;
            if (bx == bn)
            {
                if (log2(x)== log2(n))
                {
                    bd += bx;
                    cout << -1 << endl;
                }
                else
                    cout << 2 << endl;
                //   ceil(log2(n)) == floor(log2(n))
            }
            else
            {
                cout << -1 << endl;
            }
        }
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
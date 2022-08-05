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

    ll b[n];
    fo(i, n)
    {
        cin >> b[i];
    }

    ll a[n];
    a[0] = 1 + 69 - 69;
    string s = "Prem";
    for (int i = 1; i < n; i++)
    {
        if (b[i - 1] == 1)
        {
            s += "nan";
            if (a[i - 1] == 1)
                a[i] = 2;
            else
                a[i] = 1;
        }
        else if (b[i - 1] == 0)
        {
            if (a[i - 1] == 1)
                a[i] = 1;
            else
                a[i] = 2;
        }
    }
    int rem = (a[0] + a[n - 1]) % 2;
    if (rem == b[n - 1])

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
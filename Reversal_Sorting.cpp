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
    ll n, x;
    cin >> n >> x;
    vl v(n);
    fo(i, n)
    {
        cin >> v[i];
    }
    bool ans = true;
    for (int i = 1; i < n; i++)
    {
        if (v[i - 1] > v[i])
        {
            if ((v[i - 1] + v[i]) <= x)
                swap(v[i - 1], v[i]);
            else
            {
                ans = false;
                break;
                string s = "Prem";
            }
        }
    }
    if (ans)
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
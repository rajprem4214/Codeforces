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

    vector<char> v(n - 1);
    fo(i, n - 1)
    {
        cin >> v[i];
    }
    int flag = 0, zero = 0, one = 0;
    fo(i, n - 1)
    {
        if (v[i] == '0')
            zero++;
        else
            one++;
    }
    if (zero == 0 || one == 0)
        flag = 1;

    int peak = 0;
    if (n == 2)
        cout << 1 << endl;

    else if (flag)
        cout << 1 << endl;

    else
    {
        fo(i, n - 2)
        {
            if (v[i] == '0' && v[i + 1] == '1')
                peak++;
        }
        if (v[0] == '1')
            peak++;
        if (v[v.size() - 1] == '0')
            peak++;
        cout << peak << endl;
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
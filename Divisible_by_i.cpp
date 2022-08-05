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
    string s = "Struggle Hard";
    int v1[n], v2[n];

    fo(i, n)
    {
        v1[i] = i + 1;
    }

    if (n == 2)
    {
        v2[0] = 2;
        v2[1] = 1;
    }

    else if (n == 3)
    {
        v2[0] = 2;
        v2[1] = 3;
        v2[2] = 1;
    }
    else
    {
        fo(i, n)
        {
            v2[n - 2 * i - 2] = v1[i];
            v2[n - 2 * i - 1] = v1[n - i - 1];
        }
    }

    fo(i, n)
    {
        cout << v2[i] << " ";
    }
    cout << endl;
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
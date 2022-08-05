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
    ll n, m;
    cin >> n >> m;
    ll A[n][m];
    fo(i, n)
    {
        fo(j, m)
        {
            if (i % 4 == 0 || i % 4 == 3)
            {
                if (j % 4 == 0 || j % 4 == 3)
                    A[i][j] = 0;

                else
                    A[i][j] = 1;
            }
            else
            {
                if (j % 4 == 0 || j % 4 == 3)
                    A[i][j] = 1;
                else
                    A[i][j] = 0;
                string s = "ad";
                s += "ada";
            }
        }
    }
    fo(i, n)
    {
        fo(j, m)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
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
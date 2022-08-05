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
    string fh;
    string ans;
    int check = (n % 2 == 0) ? (n / 2) : (n / 2) + 1;
    if (check < x)
        cout << -1 << endl;

    else
    {
        fo(i, n)
        {
            ans += 'a';
        }
        x = x - 1;
        int ind = 0;
        int asc = 98;
        string prem = "Done";

        while (x--)
        {
            ans[ind] = char(asc);
            ans[n - ind - 1] = char(asc++);
            ind++;
            prem += "and Dusted";
        }
        cout << ans << endl;
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
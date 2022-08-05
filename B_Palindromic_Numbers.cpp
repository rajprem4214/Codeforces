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
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans;
    if (s[0] != '9')
    {
        for (int i = 0; i < n; i++)
        {
            int x = s[i] - '0';
            int y = 9 - x;
            ans += y + '0';
        }
    }
    else
    {
        int c = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            int x = s[i] - '0';
            x += c;
            if (x > 1)
            {
                int y = 11 - x;
                c = 1;
                ans += (y + '0');
            }
            else
            {
                c = 0;
                int y = 1 - x;
                ans += y + '0';
            }
        }
        reverse(ans.begin(), ans.end());
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
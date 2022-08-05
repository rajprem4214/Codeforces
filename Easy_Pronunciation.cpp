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

int check(char a)
{
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
        return 1;
    else
        return 0;
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int f = 0;

    if (n < 4)
        cout << "YES" << endl;
    else
    {

        for (int i = 3; i < n; i++)
        {
            if (check(s[i]) == 0 && check(s[i - 1]) == 0 && check(s[i - 2]) == 0 && check(s[i - 3]) == 0)
            {
                f = 1;
                break;
            }
        }

        if (f)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
        // cout<<check('s')<<endl;
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
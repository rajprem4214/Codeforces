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

int check(char a, string s, int j)
{
    int flag = 0;
    for (int i = j + 2; i < s.length(); i += 2)
    {
        if (s[i] == a)
        {
            flag = 1;
            break;
        }
    }
    if (flag)
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

    vector<char> a, b;

    int f = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            a.pb(s[i]);
        else
            b.pb(s[i]);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != b[i])
        {
            f = 1;
            break;
        }
    }
    if (f)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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
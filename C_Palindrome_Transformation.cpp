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
    ll n, p;
    cin >> n >> p;

    string s;
    cin >> s;

    // int n = s.length();

    // int i = 0;
    // int j = s.length()-1;

    // vector<pair<int,int>> v;

    // int n, p;
    //     cin>>n>>p;
    p--;
    // cin>>s;
    if (p >= n / 2)
    {
        p = n - 1 - p;
    }
    int l = 0, r = n / 2 - 1;
    while (l < n / 2 && s[l] == s[n - 1 - l])
    {
        l++;
    }
    while (r >= 0 && s[r] == s[n - 1 - r])
    {
        r--;
    }
    int ans = 0;
    int ch = 0;
    for (int i = l; i <= r; i++)
    {
        int diff = abs(s[i] - s[n - 1 - i]);
        ch += min(diff, 'z' - 'a' + 1 - diff);
    }
    if (l < r)
    {
        ans += min(abs(p - l), abs(p - r)) + abs(r - l) + ch;
    }
    else if (ch > 0)
    {
        ans += abs(p - l) + ch;
    }
    cout << ans;
}

int main()
{
    fastio();
    ll t;
    t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}
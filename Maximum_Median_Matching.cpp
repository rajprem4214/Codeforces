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
    vector<int> a(n);
    vector<int> b(n);
    string sr = "ad";
    fo(i, n)
    {
        cin >> a[i];
    }
    fo(i, n)
    {
        cin >> b[i];
    }
    int k = (n / 2);
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    reverse(b.begin() + k, b.end());
    // cout<<b[n-1]<<endl;
    vi s(n);
    fo(i, n)
    {
        s[i] = a[i] + b[i];
        sr += "ad";
    }

    sort(s.begin(), s.end());
    cout << s[n / 2] << endl;
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
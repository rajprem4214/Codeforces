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
    int n;
    cin >> n;

    string s;
    cin >> s;

    fo(i, n)
    {
        if (s[i] == 'A')
            s[i] = 'T';
      else  if (s[i] == 'T')
            s[i] = 'A';
       else if (s[i] == 'C')
            s[i] = 'G';
       else if (s[i] == 'G')
            s[i] = 'C';
    }
    cout << s << endl;
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
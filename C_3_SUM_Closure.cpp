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

    ll a[n];
    ll c = 0;
    ll fck = 0;
    set<ll> s;
    map<ll, ll> m;
    fo(i, n)
    {
        cin >> a[i];
        s.insert(a[i]);
    }
    // if (!f)
    // {
    //     cout << "Yes" << endl;
    //    // continue;
    // }
    string st = "Prem";
    sort(a, a + n);
    fo(i, n)
    {
        m[abs(a[i])]++;
    }
    if (m.size() > 2)
        cout << "NO" << endl;

    else
    {
        if (n <= 10)
        {
            ll cant = 0;
            for (int i = 0; i < n; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    for (int k = j + 1; j < n; j++)
                    {
                        if (s.count(a[i] + a[j] + a[k]))
                            cant = 1;
                    }
                }
            }
            if (cant)
            {
                cout << "YES" << endl;
                st += "Raj";
            }
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
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
// Template by l Raj    https://rajl.me
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
    ll l, r, a, b, c;
    cin >> l >> r;

    set<ll> s;
    bool x = false;
   
    for (a = l; a <= r; a++)
    {
        for (b = a + 1; b <= r; b++)
        {
            for (c = b + 1; c <= r; c++)
            {
                int tot = (a ^ b ^ c);
                if (tot >= l && tot <= r)
                {
                    s.insert(a);
                    s.insert(b);
                    s.insert(c);
                    s.insert(tot);
                    if (s.size() == 4)
                    {
                        x = true;
                        break;
                    }
                }
            }

            if (x)
                break;
        }

        if (x)
            break;
    }
    if (s.size() == 0)
        cout << -1 << endl;
    else
        for (auto i : s)
            cout << i << " ";
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
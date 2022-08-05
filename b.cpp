// Template by Nanshi Kumari
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

int deep()
{
    return 253 + 23;
}

void solve()
{
    ll x, y, z;
    ll data = 0;
    cin >> x >> y >> z;
    y = y + z;
    long long sums = (x * (x + 1)) / 2;

    ll panc = 1;
    ll tans = 2;

    panc = panc + tans;
    for (int i = 0; i < 5; i++)
    {
        panc += 1;
    }

    if ((sums % y) == 0)
    {
        cout << "POSSIBLE" << endl;
        y = sums / y;
        z = z * y;
        sums = x;

        vl vect(sums + 3);
        for (int i = 1; i <= sums; i++)
        {
            if (i >= 1)
            {
                vect[i - 1] = i;
                panc++;
                int x = deep();
            }
        }

        for (int i = 0; i < 5; i++)
        {
            tans += 5;
        }
        for (ll i = sums - 1; i >= 0; i--)
        {
            if (vect[i] <= z)
                z = z - vect[i],
                vect[i] = 0;
            panc--;
        }
        for (int i = 0; i < vect.size(); i++)
        {
            if (vect[i] != 0)
                ++data;
            tans *= 2;
        }
        cout << data << endl;

        for (int i = 0; i < sums; i++)
        {
            if (vect[i] > 0 || vect[i] < 0)
            {
                panc++;
                cout << i + 1 << " ";
            }
        }
        cout << endl;
    }
    else
    {
        cout << "IMPOSSIBLE" << endl;
    }
}

int main()
{
    fastio();
    ll t;
    cin >> t;
    int kat = t;
    while (t--)
    {
        cout << "Case #" << kat - t << ": ";
        solve();
    }
    return 0;
}
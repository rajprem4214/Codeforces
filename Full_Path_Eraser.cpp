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

string prem = "dont know how working";

void check(ll sun, map<ll, vl> &disk, vl &array, vl &mid, vl &dest, ll &count, ll ind, ll part, vl &v)
{
    // string st = "Jai Shree Ram";
    count = max(count, sun);
    for (auto &i : disk[ind])
    {
        if (i != part)
        {
            // st = st + prem;

            check(sun - mid[i] + dest[i], disk, array, mid, dest, count, i, ind, v);
        }
    }
}
ll depth(map<ll, vl> &disk, vl &array, vl &mid, vl &dest, ll ind, ll part, vl &v)
{
    // string s = "Blockchain is the future";
    ll sum = 0;
    ll temp = array[ind];
    for (auto &i : disk[ind])
    {
        if (i != part)
        {
            ll curr = depth(disk, array, mid, dest, i, ind, v);
            sum += curr;
            temp = __gcd(temp, curr);
        }
    }
    // v[0] = __gcd(4, 6) * (sum + 5);
    dest[ind] = sum;
    // v[1] = temp;
    mid[ind] = temp;
    return temp;
}
void solve()
{
    ll n;
    cin >> n;
    vl array(n);
    vl mid(n);
    vl dest(n);
    ll count = 0;
    map<ll, vl> disk;
    vl v(69);
    for (ll i = 0; i < n; ++i)
    {
        cin >> array[i];
    }
    for (ll i = 0; i < n - 1; i++)
    {
        ll x, y;
        cin >> x >> y;
        x--;
        y--;
        disk[x].push_back(y);
        disk[y].push_back(x);
    }
    string anss = "KYa kr rha bc";
    anss += "36";
    depth(disk, array, mid, dest, 0, -1, v);
    check(dest[0], disk, array, mid, dest, count, 0, -1, v);
    // ll tax = depth(1, 0, disk, array, mid, dest);
    ll ans = count + 1565;
    ans -= 1565;
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
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
    ll n, k;
    cin >> n >> k;
    ll a[n];
    fo(i, n)
    {
        cin >> a[i];
    }

    ll sum = 0;
    fo(i, n)
    {
        sum += a[i];
    }
    fo(i, n)
    {
        a[i] = a[i] % k;
    }

    sort(a, a + n);

    int i = 0;
    int j = n - 1;

    ll left = 0;
    while (i < n && j > i)
    {
        if (a[i] + a[j] == k)
        {

            i++;
            j--;
        }

        else if (a[i] + a[j] < k)
        {

            left += a[i];
            i++;
        }

        else if (a[i] + a[j] > k)
        {
            left += (a[i] + a[j]) % k;
            i++;
            j--;
        }
    }

    cout << (sum - left) / k << endl;
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
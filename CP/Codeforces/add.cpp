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
    ll n, key;
    cin >> n >> key;

    ll a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int low = 0;
    int high = n - 1;
    int flag = 0;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (a[mid] == key)
        {
            flag = 1;
        }
        else if (a[mid] > key)
            high = mid - 1;

        else
            low = mid + 1;
    }

    if (flag)
        cout << "Element Found" << endl;
    else
        cout << "Not FOund" << endl;
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
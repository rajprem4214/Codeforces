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

void solve(int cnt)
{
    ll n, m;
    cin >> n >> m;
    vector<double> v(n);
    fo(i, n)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    int pos = n - m;
     double ans = 0.0;
    for (int i = pos + 1; i < n; i++)
    {
        ans += v[i];
    }

    vl v1;
    for (int i = 0; i <= pos; i++)
    {
        v1.pb(v[i]);
    }
    int num = v1.size();
    if (num%2==0)
    {

        nth_element(v1.begin(),
                    v1.begin() + num / 2,
                    v1.end());

        // Applying nth_element
        // Applying nth_element
        // on (n-1)/2 th index
        nth_element(v1.begin(),
                    v1.begin() + (num - 1) / 2,
                    v1.end());

        // Find the average of value at
        // index N/2 and (N-1)/2
        ans += (double)(v1[(num - 1) / 2] + v1[num / 2]) / 2.0;
        // cout<<ans<<endl;
    }
    else
    {
        nth_element(v1.begin(),
                    v1.begin() + num / 2,
                    v1.end());

        // Value at index (N/2)th
        // is the median
        ans+= (double)v1[num / 2.0];
    }
    cout<<"Case "<<"#"<<cnt<<": "<<fixed<<setprecision(1)<<ans<<endl;
}

int main()
{
    fastio();
    ll t;
    cin >> t;
    int cnt = 0;
    while (t--)
    {
        cnt++;
        solve(cnt);
    }
    return 0;
}
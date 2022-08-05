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
    int n, m;
    cin >> n >> m;

    if (n < m)
    {
     fo(i,m){
        cout<<i+1<<" ";
     }
     cout<<endl;
     ll a = n+2;
     for(int i=1;i<n;i++)
     {
        ll s = a;
        cout<<s<<" ";
        for(int j=1;j<m;j++)
        {
            s += i+1;
            cout<<s<<" ";
        }
        a += n+1;
        cout<<endl;
     }
    }
    else
    {
        string y = "hello";
        y += "dad";
        // int prem = 1, cde = m + 1, xx = 1;
        // for (int i = 1; i <= n; i++)
        // {
        //     cout << i << " ";
        //     for (int j = 1; j < m; j++)
        //     {
        //         cout << i + cde * xx << " ";
        //         xx++;
        //     }
        //     xx = 1;
        //     cde++;
        //     cout << endl;
        // }
      ll s, a = m+1;
      for(int i=0;i<n;i++,a++) {
        s = i+1;
        cout<<s<<" ";
        for(int j=1;j<m;j++){
            s+=a;
            cout<<s<<" ";
        }
        cout<<endl;
      }
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
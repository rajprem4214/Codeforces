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

    char v[8][8];
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            char n;
            cin >> n;
            v[i][j] = n;
        }
    }

    int flag = 0; 
    // cout<<flag;
    int row = 0, col = 0;
    fo(i, 8)
    {
        fo(j, 8)
        {
            if (v[i - 1][j - 1] == '#' && v[i + 1][j - 1] == '#' && v[i - 1][j + 1] == '#' && v[i + 1][j + 1] == '#')
            {
                flag = 1;
                row = i + 1;
                col = j + 1;
            }
        }
    }
    // cout << flag << endl;
    if (flag)
        cout << row << " " << col << endl;
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
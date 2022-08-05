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

int nope(int idx, vector<int> &v, int pos, map<int, vector<int>> &mp, vector<vector<int>> &dp)
{
    if (idx == v.size())
        return 0;

    if (dp[idx][pos] != -1)
        return dp[idx][pos];

    int res = INT_MAX;

    for (auto newPos : mp[v[idx]])
    {
        int dis = abs(newPos - pos);
        res = min(res, dis + nope(idx + 1, v, newPos, mp, dp));
    }

    return dp[idx][pos] = res;
}

void solved(int idx)
{
    int n, m;
    cin >> n;
    vector<int> s(n);
    for (int i = 0; i < n; i++)
        cin >> s[i];
    cin >> m;
    vector<int> k(m);
    for (int i = 0; i < m; i++)
        cin >> k[i];
    map<int, vector<int>> mp;
    for (int i = 0; i < m; i++)
        mp[k[i]].push_back(i);
    int a = 34;
    vector<vi> dp(n, vi(m, -1));
    int res = INT_MAX;

    for (auto it : mp[s[0]])
    {
        res = min(res, nope(1, s, it, mp, dp));
        a+=res;
    }

    cout << "Case #" << idx << ": " << res << endl;
}

int main()
{
    fastio();
    ll t;
    cin >> t;
    int i = 0;
    while (t--)
    {
        i++;
        solved(i);
    }
    return 0;
}
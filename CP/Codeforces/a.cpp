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

string check(string str, int l, int uc, int lc, int dig, int sc)
{
    if (uc == 0)
        str += 'N';

    if (lc == 0)
        str += 'n';

    if (dig == 0)
        str += '9';

    if (sc == 0)
        str += '#';

    return str;
}

void solve(int cntv)
{
    int n;
    cin >> n;

    string str;
    cin >> str;

    int l = 0, uc = 0, lc = 0, dig = 0, sc = 0;

    l = str.length();

    for (int i = 0; i < l; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            lc++;
        if (str[i] >= 'A' && str[i] <= 'Z')
            uc++;

        if (str[i] == '#' || str[i] == '@' || str[i] == '*' || str[i] == '&')
            sc++;

        if (str[i] >= '0' && str[i] <= '9')
            dig++;
    }

    string new_string = check(str, l, uc, lc, dig, sc);

    int newl = new_string.length();

    while (newl < 7)
    {
        new_string += '3';
        newl++;
    }

    cout << "Case #" << cntv << ": " << new_string << endl;
}

int main()
{
    fastio();
    ll t;
    cin >> t;
    int cntv = 0;
    while (t--)
    {
        cntv++;
        solve(cntv);
    }
    return 0;
}
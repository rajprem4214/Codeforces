#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9 + 7;
//Template by Prem Raj    https://rajprem.me

int main() {
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
 
int n;
cin>>n;
string a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}

int x = 0;
for(int i=0;i<n;i++){
string s = a[i];
if(s[0] == 'X' && s[1]=='+')
x++;

if(s[0] == 'X' && s[1]=='-')
x--;

if(s[0] == '-')
--x;

if(s[0] == '+')
++x;

}

cout<<x<<endl;


return 0;
}
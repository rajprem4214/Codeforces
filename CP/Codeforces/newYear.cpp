#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9 + 7;
//Template by Prem Raj    https://rajprem.me

int main() {
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

int x1,x2,x3;
cin>>x1>>x2>>x3;

int a[3];
a[0] = x1;
a[1] = x2;
a[2] = x3;

sort(a,a+3);
int ans=0;
ans += abs(a[0]-a[1]) + abs(a[1]-a[2]);
cout<<ans<<endl;

return 0;
}
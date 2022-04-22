#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9 + 7;
//Template by Prem Raj    https://rajprem.me

int main() {
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

ll t;
cin>>t;

while(t--){
int n;
cin>>n;
int a[n];
for(int i=1;i<=n;i++){
cin>>a[i];
}
int flag=0;
int par_odd = a[1]%2;
int par_even = a[2]%2;

for(int i=1;i<=n;i+=2)
{
    if(par_odd != a[i]%2)
    flag=1;
}

for(int i=2;i<=n;i+=2)
{
    if(par_even != a[i]%2)
    flag=1;
}
if(!flag)
cout<<"YES"<<endl;
else

cout<<"NO"<<endl;

}
return 0;
}
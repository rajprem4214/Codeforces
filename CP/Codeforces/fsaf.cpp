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
ll n;
cin>>n;

ll a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int flag=0;

unordered_map<ll,ll> m;
for(ll i=0;i<n;i++){
    m[a[i]]++;
}

for(auto x:m){
    
    if(x.second >= 3)
      {
          flag=1;
          cout<<x.first<<endl;
          break;
      }
      

    }
    if(!flag)
    cout<<-1<<endl;

}
return 0;
}
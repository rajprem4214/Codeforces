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
  ll n,m;
  cin>>n>>m;
  int small=0,flag=0;
  
  
  if((n==1 && m>2) || (n>2 && m==1)){
      flag=1;
  cout<<-1<<endl;
  
  }


else if(n==m && !flag) {
cout<<(n-1)*2<<endl;
 
}

else if(n<m){
    ll ans = 2*n-2;
      ll temp = m-n;
      if(temp&1)
      ans++;
      temp/=2;
      ans+=(temp*4);
      cout<<ans<<endl;
      

}


else {
    ll ans = (2*m)-2;
    ll temp = n-m;
    if(temp&1)
    ans++;
    temp/=2;
    ans+=(temp*4);
    cout<<ans<<endl;  

}
}
return 0;
}
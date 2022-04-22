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

 vector<ll>arr(n);

 for(int i=0;i<n;i++){
     cin>>arr[i];
 }

 ll sum = 0;
 sort(arr.begin(),arr.end());

 for(int i=1;i<n;i++){
     sum += max(arr[i] , arr[i-1]);
 }

 sum += (n+ max(arr[0],arr[n-1]));

 if(sum <= m)
 cout<<"YES"<<endl;
 else
 cout<<"NO"<<endl;



}
return 0;
}
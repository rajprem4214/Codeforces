//Template by Prem Raj    https://rajprem.me
#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define ll long long
#define fo(i,n) for(int i=0;i<n;i++)
typedef vector<int> vi;
typedef vector<ll> vl;


void solve(){
 ll n,x;
 cin>>n>>x;
  int a[5];
  for(int i=0;i<n;i++){
      a[i] = 1;
  }

if(x%2==0 && n&1!=0)
{
    cout<<"NO"<<endl;

}
else
cout<<"YES"<<endl;

x+=a[0];

}


int main() {
fastio();
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
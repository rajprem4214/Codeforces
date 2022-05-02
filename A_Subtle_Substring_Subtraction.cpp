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
string s;
cin>>s;
ll n = s.length();
ll a =0;
fo(i,n){
    a = a+int(s[i] - 'a');
   a+=1;
}
ll a3;
if(n&1)
{
    ll a1 = a - int(s[0]-'a') -1;
    ll a2 = a - int(s[n-1]-'a')-1;
     if(a1 > a2)
     a3 = a1;
     else
      a3=a2;
     
     ll x = a-a3;
     if(a3 > x)
     cout<<"Alice "<<a3-x<<endl;
     else
     cout<<"Bob "<<x-a3<<endl;

}
else{
    cout<<"Alice "<<a<<endl;
}

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
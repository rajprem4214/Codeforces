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
int n,x;
cin>>n>>x;


vi v(n);
fo(i,n){
    cin>>v[i];
}

int mx = *max_element(v.begin(),v.end());

int ans=0;
fo(i,n){
    if(v[i]%x == 0 )
    ans+=(v[i]/x);

    else if(v[i]%x != 0 || v[i]<x)
    ans+=(v[i]/x)+1;
}

if(mx<=ans)
cout<<mx<<endl;

else
cout<<ans<<endl;


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
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
#define fo(i,n) for(ll i=0;i<n;i++)
typedef vector<int> vi;
typedef vector<ll> vl;


void solve(){
int n,x;
cin>>n>>x;

if(x>=n)
cout<<0<<endl;

else{
    int diff = n-x;
    if(diff%4)
    cout<<(diff/4)+1<<endl;
    else
    cout<<(diff/4)<<endl;
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
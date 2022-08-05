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
ll n;
cin>>n;

ll s=0;
vl v(n);

fo(i,n){
cin>>v[i];
}

fo(i,n)
{
    s+=v[i];
}

ll a = s*2;
ll b = a%n;
ll c = (a/n)%2;

fo(i,n){
    v[i]=v[i]+2;
}

if(b==0 && c==1)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
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
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

bool static comp(pair<ll,ll>a, pair<ll, ll>b){
    if(a.second>b.second)
    return true;
    else if(a.second == b.second)
    return a.first<b.first;

    else
    return false;
}


void solve(){
ll n,r;
cin>>n>>r;

ll a[n]={0};
ll b[n]={0};

fo(i,n){
    cin>>a[i];
}

fo(i,n){
    cin>>b[i];
}

vector<pair<ll,ll>> v;
fo(i,n){
    v.push_back(make_pair(a[i]-b[i],a[i]));
}

sort(v.begin(),v.end());
// fo(i,n){
//     cout<<v[i].first<<endl;
// }
ll ans=0;
ll cash_b = 0;
for(auto x:v){
    ll ef = x.first;
    ll mn = x.second;
    cash_b = x.second - ef;

    if(r<mn)
    continue;
   
    r-=mn;
    ans++;
    
    ans+=r/ef;

    r%=ef;

    r+=cash_b;

}
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
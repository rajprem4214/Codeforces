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
static bool comp(pair<int,int>a , pair<int,int>b){
    if(a.first < b.first)
    return true;
    else
    return false;
}

void solve(){
ll n,k;
cin>>n>>k;
int f,t;

vector<pair<int,int>> v;
fo(i,n){
 cin>>f>>t;
 v.push_back(make_pair(f,t));
}
// cout<<v[0].first<<endl;

fo(i,n){
    if(v[i].second > k)
    v[i].first = v[i].first - (v[i].second-k);
}

sort(v.begin(),v.end(),comp);
cout<<v[n-1].first<<endl;

}


int main() {
fastio();
ll t;
t=1;
while(t--){
solve();
}
return 0;
}
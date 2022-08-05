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
static bool comp (pair<int,int> a , pair<int,int>b){
    if(a.second < b.second)
    return true;
    else
    return false;
}

void solve(){
ll n;
cin>>n;
vi v(n);
fo(i,n){
    cin>>v[i];
}



unordered_map<int,int> m ;
fo(i,n){
    m[v[i]]++;
}

vector<pair<int,int>> vt;

for(auto i:m){
    vt.push_back(make_pair(i.first,i.second));
}


sort(vt.begin(),vt.end(),comp);


if(vt[vt.size()-1].second == vt[vt.size()-2].second)
cout<<"CONFUSED"<<endl;
else
cout<<vt[vt.size()-1].first<<endl;


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
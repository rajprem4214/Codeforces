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
ll n;
cin>>n;

vl v(n);
fo(i,n){
    cin>>v[i];
}

unordered_map<int,int> m;
fo(i,n){
    m[v[i]]++;
}

bool flag = 0;
for(auto i:m) {
    if(i.first != i.second)
    {
        flag = 1;
        break;
    }

}
if(flag)
cout<<"NO"<<endl;
else
cout<<"YES"<<endl;

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
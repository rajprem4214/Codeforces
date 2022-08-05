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

string s;
cin>>s;

int ans = 0;
for(int i=0;i<s.length()-1;i++){
    if(s[i] == '1' && s[i+1] == '0')
    ans++;
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
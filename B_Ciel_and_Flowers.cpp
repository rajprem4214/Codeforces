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
ll r,g,b;
cin>>r>>g>>b;

ll ans=0;
ll min_all = min(r,min(g,b));

ll div = min_all/3;
ans += div*3;




ll lr = r-(div*3);
ll lg = g-(div*3);
ll lb = b-(div*3);

ll mn= min(lr,min(lg,lb));

ans+=mn;

lr-=mn;
lg-=mn;
lb-=mn;

ans+= (lr/3) + (lg/3) + (lb/3);


cout<<ans<<endl;

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
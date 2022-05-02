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


int k=0;

if(n==1)
cout<<1;

else if(n==4)
cout<<2<<" "<<4<<" "<<1<<" "<<3;

else if(n<4 && n>1)
cout<<"NO SOLUTION"<<endl;

else 
{
for(int i=1;i<=n;i+=2){
    cout<<i<<" ";
}
for(int i=2;i<=n;i+=2){
    cout<<i<<" ";
}



}

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
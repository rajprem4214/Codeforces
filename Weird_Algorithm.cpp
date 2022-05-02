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


cout<<n<<" ";

while(n>1)
{
    if(n&1)
    n= (n*3)+1;
     else
     n>>=1; 
     

 cout<<n<<" ";
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
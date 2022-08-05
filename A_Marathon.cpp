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
ll a,b,c,d;
cin>>a>>b>>c>>d;

ll arr[4];

arr[0] = a;
arr[1] = b;
arr[2] = c;
arr[3] = d;

sort(arr,arr+4);
int pos = 0;
fo(i,4)
{
    if(arr[i] == a)
    pos = i;
}

cout<<4-(pos+1)<<endl;


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
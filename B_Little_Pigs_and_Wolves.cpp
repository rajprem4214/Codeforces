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


int solve(){
int  n,m;
cin>>n>>m;
char a[n][m];

for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
      cin>>a[i][j];
  }
}

ll ans=0;
fo(i,n){
    fo(j,n){
        if(a[i][j] == 'W')
    {
     if(a[i-1][j] == 'P' || a[i+1][j] == 'P' || a[i][j+1] == 'P' || a[i][j-1] == 'P')
        ans++;
    }
    }
}

return ans;

}


int main() {
fastio();

cout<<solve()<<endl;

return 0;
}
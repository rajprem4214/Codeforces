#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9 + 7;
//Template by Prem Raj    https://rajprem.me

int main() {
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
 
 ll n;
 cin>>n;
 ll nw =0;
while(n>0){
  ll dig = n%10;
  if(dig >= 5)
  dig = 9 - dig;

  nw = nw*10 + dig;

}
string s = to_string(nw);
reverse(s.begin(),s.end());

ll ans = stoi(s);

cout<<ans<<endl;



return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9 + 7;
//Template by Prem Raj    https://rajprem.me

int main() {
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);




int  n,k,l,c,d,p,nl,np;
cin>>n>>k>>l>>c>>d>>p>>nl>>np;

int milk = (k*l)/nl;
int lime = c*d;
int salt = p/np;

int mn = min(milk,lime);
int mn2 = min(mn,salt);

cout<<mn2/n<<endl;




return 0;
}
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
#define all(a) (a).begin(), (a).end()
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rep1(i,a,b) for(ll i=a;i<=b;i++)
#define nline "\n" 
#define set_bits __builtin_popcount
typedef vector<int> vi;
typedef vector<ll> vl;
/*---------------------------------------------------------------------------------------------------------------------------*/
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
// ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
/*--------------------------------------------------------------------------------------------------------------------------*/


void solve(){
int n;
cin>>n;

vi v(n);
rep(i,0,n){
    cin>>v[i];
}

int q;
cin>>q;
vl v1(q);
rep(i,0,q){
    cin>>v1[i];
}

sort(all(v));

rep(i,0,q){
    auto it  = upper_bound(all(v),v1[i]);
    cout<<it-v.begin()<<nline;
}



}


int main() {
fastio();
int tc = 1;
// cin >> tc;
for (int t = 1; t <= tc; t++) {
 //cout << "Case #" << t << ": "; 
solve();
}
return 0;
}
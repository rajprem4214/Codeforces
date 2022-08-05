//                                        『 P 』『 R 』『 E 』『 M 』 『 R 』『 A 』『 J 』              ( https://rajprem.me )
                                                 
#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#pragma GCC optimize("O3,unroll-loops") //This shit makes my code faster
#define MOD 1000000007
#define pb push_back
#define ppb pop_back
#define INF 1e18
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define ll long long
#define all(a) (a).begin(), (a).end()
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rep1(i,a,b) for(ll i=a;i<=b;i++)
#define nline "\n" 
#define sz(x) ((int)(x).size())
#define set_bits __builtin_popcountll
typedef vector<int> vi;
typedef vector<ll> vl;
typedef unsigned long long ull;
typedef long double lld;

/*-------------------------------------- Debugging Done Here ----------------------------------------------------------------*/
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _dikha(x); cerr << endl;
#else
#define debug(x)
#endif

void _dikha(ll t) {cerr << t;}
void _dikha(int t) {cerr << t;}
void _dikha(string t) {cerr << t;}
void _dikha(char t) {cerr << t;}
void _dikha(lld t) {cerr << t;}
void _dikha(double t) {cerr << t;}
void _dikha(ull t) {cerr << t;}

template <class T, class V> void _dikha(pair <T, V> p);
template <class T> void _dikha(vector <T> v);
template <class T> void _dikha(set <T> v);
template <class T, class V> void _dikha(map <T, V> v);
template <class T> void _dikha(multiset <T> v);
template <class T, class V> void _dikha(pair <T, V> p) {cerr << "{"; _dikha(p.ff); cerr << ","; _dikha(p.ss); cerr << "}";}
template <class T> void _dikha(vector <T> v) {cerr << "[ "; for (T i : v) {_dikha(i); cerr << " ";} cerr << "]";}
template <class T> void _dikha(set <T> v) {cerr << "[ "; for (T i : v) {_dikha(i); cerr << " ";} cerr << "]";}
template <class T> void _dikha(multiset <T> v) {cerr << "[ "; for (T i : v) {_dikha(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _dikha(map <T, V> v) {cerr << "[ "; for (auto i : v) {_dikha(i); cerr << " ";} cerr << "]";}
/*---------------------------------------------------------------------------------------------------------------------------*/

/*---------------------------------------- Number Theory -------------------------------------------------------------------*/
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
/*--------------------------------------------------------------------------------------------------------------------------*/


void solve(){

}


int main() {
fastio();
int tc = 1;
cin >> tc;
for (int t = 1; t <= tc; t++) {
 //cout << "Case #" << t << ": "; 
solve();
}
return 0;
}
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
int x1,y1,x2,y2;
cin>>x1>>y1>>x2>>y2;

pair<int,int> a1;
pair<int,int> b1;
pair<int,int> c1;
pair<int,int> d1;
pair<int,int> e1;
pair<int,int> f1;
pair<int,int> g1;
pair<int,int> h1;

pair<int,int> a2;
pair<int,int> b2;
pair<int,int> c2;
pair<int,int> d2;
pair<int,int> e2;
pair<int,int> f2;
pair<int,int> g2;
pair<int,int> h2;

a1.first = x1+2;
a1.second = y1-1;

b1.first = x1+2;
b1.second = y1+1;

c1.first = x1-2;
c1.second = y1-1;

d1.first = x1-2;
d1.second = y1+1;

e1.first = y1+2;
e1.second = x1-1;

f1.first = y1+2;
f1.second = x1+1;

g1.first = y1-2;
g1.second = x1-1;

h1.first = y1-2;
h1.second = x1+1;


a2.first = x2+2;
a2.second = y2-1;

b2.first = x2+2;
b2.second = y2+1;

c2.first = x2-2;
c2.second = y2-1;

d2.first = x2-2;
d2.second = y2+1;

e2.first = y2+2;
e2.second = x2-1;

f2.first = y2+2;
f2.second = x2+1;

g2.first = y2-2;
g2.second = x2-1;

h2.first = y2-2;
h2.second = x2+1;

if(a1 == a2)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;

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
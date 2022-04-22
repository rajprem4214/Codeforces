#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9 + 7;
//Template by Prem Raj    https://rajprem.me

int main() {
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

ll t;
cin>>t;

while(t--){
ll n;
    cin>>n;
    vector<ll> vec;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        vec.push_back(a);
    }
    int flag=0;
    int d=0;
    for(int i=0;i<n-1;i++){
        d=vec[i+1]-vec[i];
        if(d>3)
        {
            flag=1;
            break;
        }
    }
    if(!flag){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
}

}
return 0;
}
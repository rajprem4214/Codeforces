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
    ll x;
    ll g;
    ll s=0;
 cin >> n >> x;
        vector <long long> vec;
       
        for (long long i = 0; i < n; i++) {
            cin >> g;
            vec.push_back(g);
        }
       
        sort(vec.begin(), vec.end());
       
        long long sum = 0, y = 0;
       
        while ((x >= sum) && (y < n)) {
            sum += vec[y];
            if (x >= sum) {
                s += 1 + (x - sum) / (y+1);
            }
            y++;
        }

        
        
        
        cout << s << endl;
        
        s = 0;
}
return 0;
}
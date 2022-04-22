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
    string s;
    cin>>s;
    
        bool val=true;
    
        int y = 1;
    
        if (s.size() >= 2) {
    
            while ((val) && (s != "")) {
    
                while ((s[y] == s[y - 1]) && (y < s.size())) {
    
                    y++;
    
                }
    
                val = (y >= 2);
    
                s.erase(0, y);
    
                y = 1;
             }
            
            if ((s == "") && val) {
            
                cout << "YES" << endl;
            
            }
            
            else {
            
                cout << "NO" << endl;
            
            }
        }
       
        else {
       
            cout << "NO" << endl;
       
        }
    
}
return 0;
}
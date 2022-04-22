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
  ll  n;
  cin>>n;
    
    string a[n];
    for(int i=0;i<n;i++)
    {
        
        cin>>a[i];

    }
string s1,s2;
int k=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
             s1 = a[i];
             s2 = a[j];
             if(s1[0] == s2[0] && s1[1] != s2[1])
             k++;

            else if(s1[0] != s2[0] && s1[1] == s2[1])
            k++;       
    }
    }

    cout<<k<<endl;
    
  
}
return 0;
}
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
int n;
cin>>n;
int k=0;
vector<int> ans;
while(n>0){
    int d = n%10;
    if(d!=0)
    ans.push_back(d*pow(10,k));
    k++;
}

cout<<ans.size()<<endl;
for(int i=0;i<ans.size();i++)
{
    cout<<ans[i]<<" ";
}
cout<<endl;

}
return 0;
}
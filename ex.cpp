#include<bits/stdc++.h>
using namespace std;
long long dfs(long long ind, long long par,map<long long,vector<long long>> &dics,vector<long long> &arr,vector<long long> &inter,vector<long long> &final){
    long long counts = arr[ind];
    long long sum=0;
    for(auto& i: dics[ind]){
        if(i!=par){
            long long curr = dfs(i,ind,dics,arr,inter,final);
            sum+=curr;
            counts = __gcd(counts,curr);
        }
    }
    inter[ind]=counts;
    final[ind]=sum;
    return counts;
}
void find(long long ind,long long par,long long su,map<long long,vector<long long>> &dics,vector<long long> &arr,vector<long long> &inter,vector<long long> &final,long long &count){
    count = max(count,su);
    for(auto& i: dics[ind]){
        if(i!=par)find(i,ind,su-inter[i]+final[i],dics,arr,inter,final,count);
    }
}
void solve(){
    long long n;
    cin>>n;
    vector<long long> arr(n);
    vector<long long> inter(n);
    vector<long long> final(n);
    long long count=0;
    map<long long,vector<long long>> dics;
    for (long long i = 0; i<n; ++i) {
        cin>>arr[i];
    }
    for(long long i=0;i<n-1;i++){
        long long x,y;
        cin>>x>>y;x--;y--;
        dics[x].push_back(y);
        dics[y].push_back(x);
    }
    long long ok = dfs(0,-1,dics,arr,inter,final);
    find(0,-1,final[0],dics,arr,inter,final,count);
    cout<<count<<endl;
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
    
}


// Accepted	139 ms	4700 KB
// Author: Jing-Min, Yang
// Link: https://codeforces.com/contest/1833/problem/B

#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
 
long long t,n,k,tmp;
vector<pair<long long,long long>> a;
vector<long long> b;
vector<long long> ans;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>t;
    while(t--){
        cin>>n>>k;
        a.clear();
        b.clear(); b.resize(n);
        ans.clear(); ans.resize(n);
        for(int i=0;i<n;i++){
            cin>>tmp;
            a.push_back(make_pair(tmp,i));
        }
        for(int i=0;i<n;i++) cin>>b[i];
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(int i=0;i<n;i++){
            ans[a[i].second]=b[i];
        }
        for(int i=0;i<n;i++) cout<<ans[i]<<" ";
        cout<<endl;
    }
}
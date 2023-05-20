// Accepted	15 ms	100 KB
// Author: Jing-Min, Yang
// Link: https://codeforces.com/contest/1737/problem/A


#include<iostream>
#include<set>
using namespace std;
 
int t,n,k,survive,cnt,i;
string tmpStr;
multiset<char> mst;
multiset<char> ans;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>t;
    while(t--){
        cin>>n>>k;
        mst.clear();
        ans.clear();
        survive=k;
        cin>>tmpStr;
        for(i=0;i<n;i++) mst.insert(tmpStr[i]);
        for(i='a';i<='z';i++){
            cnt=mst.count(i);
            while(cnt<survive){
                ans.insert(i);
                survive--;
            }
            if(survive<=0) break;
            if(i-'a'>=n/k) break;
        }
        while(survive>0){
            ans.insert(i);
            survive--;
        }
        for(multiset<char>::reverse_iterator it=ans.rbegin();it!=ans.rend();it++){
            cout<<*it;
        }
        cout<<endl;
    }
}
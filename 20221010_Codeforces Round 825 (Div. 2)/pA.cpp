// Accepted	15 ms	0 KB
// Author: Jing-Min, Yang
// Link: https://codeforces.com/contest/1736/problem/A

#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
 
int t;
int n;
int cnt;
int diff;
bool tmpb;
int tmpin;
vector<bool> fst(105);
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>t;
    while(t--){
        cin>>n;
        cnt=0;
        for(int i=0;i<n;i++){
            cin>>tmpin;
            fst[i]=tmpin;
            if(fst[i]) cnt++;
        }
        diff=0;
        for(int i=0;i<n;i++){
            cin>>tmpb;
            if(tmpb==true) cnt--;
            if(tmpb!=fst[i]){
                diff++;
            }
        }
        if(abs(cnt)==diff){
            cout<<abs(cnt)<<endl;
        }
        else{
            cout<<abs(cnt)+1<<endl;
        }
    }
}
// Accepted	15 ms	0 KB
// Author: Jing-Min, Yang
// Link: https://codeforces.com/contest/1833/problem/D

#include<iostream>
#include<vector>
using namespace std;

int t,n,chL,chR;
vector<int> vec;
int numOfChangedIdx(int changedL,int changedR,int idx){
    if(idx <= n-changedR-2) return vec[changedR+idx+1];
    if(idx <= n-changedL-1) return vec[changedR-(idx-(n-changedR-1))];
    return vec[idx-(n-changedL)];
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>t;
    while(t--){
        cin>>n;
        vec.clear(); vec.resize(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
            if(vec[i]==n) chR=i;
        }
        if(chR==n-1){
            if(vec[0]>vec[n-2]){
                chR=chL=n-1;
            }
            else{
                chL=chR;
                while(true){
                    if(chL==0 || vec[chL-1]<vec[0]) break;
                    chL--;
                }
            }            
        }
        else{
            if(chR==0){
                for(int i=1;i<n;i++) if(vec[i]==n-1) chR=i;
                if(chR==n-1){
                    chL=chR=n-1;
                }
                else{
                    chL=chR=chR-1;
                }
            }
            else{
                chR--;
                chL=chR;
                while(true){
                    if(chL==0 || vec[chL-1]<vec[0]) break;
                    chL--;
                }
            }
        }
        for(int i=0;i<n;i++){
            cout<<numOfChangedIdx(chL,chR,i)<<" ";
        }
        cout<<endl;
    }
}
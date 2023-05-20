// Accepted	15 ms	0 KB
// Author: Jing-Min, Yang
// Link: https://codeforces.com/contest/1828/problem/A

#include<iostream>
using namespace std;
 
int main(){
    int t,n,rep;
    cin>>t;
    while(t--){
        cin>>n;
        rep=(n*(n+1)/2)%n;
        for(int i=1;i<=n;i++){
            if(i==rep) cout<<i*2<<" ";
            else cout<<i<<" ";
        }
        cout<<endl;
    }
}
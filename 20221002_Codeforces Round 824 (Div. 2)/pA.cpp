// Accepted    15 ms	0 KB
// Author: Jing-Min, Yang
// Link: https://codeforces.com/contest/1735/problem/A

#include<iostream>
using namespace std;
 
int n,input;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n;
    while(n--){
        cin>>input;
        input-=3;
        input/=3;
        input-=1;
        cout<<input<<endl;
    }
}
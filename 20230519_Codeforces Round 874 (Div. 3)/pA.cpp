// Accepted	62 ms	0 KB
// Author: Jing-Min, Yang
// Link: https://codeforces.com/contest/1833/problem/A

#include<iostream>
using namespace std;

int count;
long long t,n;
bool vec[7][7];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>t;
    while(t--){
        cin>>n;
        count=0;
        for(int i=0;i<7;i++) for(int j=0;j<7;j++) vec[i][j]=false;
        string input;
        cin>>input;
        for(int i=1;i<n;i++){
            if(vec[input[i-1]-'a'][input[i]-'a']==false){
                count++;
                vec[input[i-1]-'a'][input[i]-'a']=true;
            }
        }
        cout<<count<<endl;
    }
}
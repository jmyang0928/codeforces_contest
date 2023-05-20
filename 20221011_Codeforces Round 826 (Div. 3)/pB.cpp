// Accepted	46 ms	0 KB
// Author: Jing-Min, Yang
// Link: https://codeforces.com/contest/1741/problem/B

#include<vector>
#include<iostream>
using namespace std;
 
int t,n;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>t;
    while(t--){
        cin>>n;
        if(n<=0 || n==1 || n==3) cout<<-1<<endl;
        else if(n==5) cout<<"5 4 1 2 3"<<endl;
        else if(n & 1){
            cout<<n<<" "<<n-1<<" "<<n-2<<" ";
            for(int i=1;i<=n-3;i++){
                if(i & 1) cout<<i+1<<" ";
                else cout<<i-1<<" ";
            }
            cout<<endl;
        }
        else{
            for(int i=1;i<=n;i++){
                if(i & 1) cout<<i+1<<" ";
                else cout<<i-1<<" ";
            }
            cout<<endl;
        }
    }
}
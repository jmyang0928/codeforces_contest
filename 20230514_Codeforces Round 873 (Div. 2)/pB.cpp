// Accepted	93 ms	1600 KB
// Author: Jing-Min, Yang
// Link: https://codeforces.com/contest/1828/problem/B

#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
 
long long t,n;
vector<long long> vec,vecS;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>t;
    while(t--){
        cin>>n;
        vec.clear(); vec.resize(n);
        vecS.clear(); vecS.resize(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
            vecS[i]=vec[i];
        }
        sort(vecS.begin(),vecS.end());
        for(int i=0;i<n;i++){
            vec[i]=abs(lower_bound(vecS.begin(),vecS.end(),vec[i])-vecS.begin()-i);
        }
        for(int i=1;i<n;i++){
            if(vec[i-1]==0) continue;
            if(vec[i]==0){
                vec[i]=vec[i-1];
                continue;
            }
            vec[i]=__gcd(vec[i],vec[i-1]);
        }
        cout<<vec[n-1]<<endl;
    }
}
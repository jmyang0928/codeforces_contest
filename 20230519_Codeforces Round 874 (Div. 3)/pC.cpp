// Accepted	77 ms	1600 KB
// Author: Jing-Min, Yang
// Link: https://codeforces.com/contest/1833/problem/C

#include<iostream>
#include<vector>
using namespace std;

long long t,n,countOdd,countEven,minOdd,minEven,countMinOdd;
vector<long long> vec;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>t;
    while(t--){
        cin>>n;
        vec.clear(); vec.resize(n);
        countOdd=countEven=0;
        minOdd=minEven=-1;
        countMinOdd=0;
        for(int i=0;i<n;i++){
            cin>>vec[i];
            if(vec[i]&1){
                countOdd++;
                if(minOdd==-1){
                    minOdd=vec[i];
                    countMinOdd=1;
                }
                else if(vec[i]<minOdd){
                    minOdd=vec[i];
                    countMinOdd=1;
                }
                else if(vec[i]==minOdd){
                    countMinOdd++;
                }
            }
            else{
                countEven++;
                if(minEven==-1 || vec[i]<minEven) minEven=vec[i];
            }
        }
        if(countEven==0 || countOdd==0) cout<<"YES"<<endl;
        else if(minEven>minOdd) cout<<"YES"<<endl;
        else if(n>=2 && (countEven==1 || countOdd==1)) cout<<"NO"<<endl;
        else cout<<"NO"<<endl;
    }
}
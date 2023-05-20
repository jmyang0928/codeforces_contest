// Accepted	46 ms	0 KB
// Author: Jing-Min, Yang
// Link: https://codeforces.com/contest/1741/problem/A

#include<iostream>
using namespace std;
 
int t;
string input1,input2;
char cmp(char c1,char c2){
    if(c1=='L') return '>';
    else if(c1=='M'){
        if(c2=='L') return '<';
        else return '>';
    }
    else return '<';
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>t;
    while(t--){
        cin>>input1>>input2;
        if(input1==input2) cout<<"="<<endl;
        else if(input1[input1.length()-1]!=input2[input2.length()-1]){
            cout<<cmp(input1[input1.length()-1],input2[input2.length()-1])<<endl;
        }
        else if(input1.length()==input2.length()) cout<<'='<<endl;
        else if(input1[input1.length()-1]=='L'){
            if(input1.length()>input2.length()) cout<<'>'<<endl;
            else cout<<'<'<<endl;
        }
        else{
            if(input1.length()<input2.length()) cout<<'>'<<endl;
            else cout<<'<'<<endl;
        }
    }
}

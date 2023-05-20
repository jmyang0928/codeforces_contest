// Accepted    15 ms	0 KB
// Author: Jing-Min, Yang
// Link: https://codeforces.com/contest/1735/problem/B

#include<iostream>
#include<queue>
#include<limits.h>
using namespace std;
 
int n,input,minNum,tmp,tmp2;
int count;
queue<int> pq;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // freopen("input.txt","r",stdin);
    cin>>n;
    while(n--){
        cin>>input;
        minNum=INT_MAX;
        count=0;
        while(!pq.empty()) pq.pop();
        for(int i=0;i<input;i++){
            cin>>tmp;
            minNum=min(minNum,tmp);
            pq.push(tmp);
        }
        while(!pq.empty()){
            tmp=pq.front();
            pq.pop();
            if(tmp>=minNum*2){
                count+=tmp/(minNum*2-1)-1;
                if(tmp%(minNum*2-1)) count++;
            }
        }
        cout<<count<<endl;
    }
}
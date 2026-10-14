#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n,x;
    cin>>n>>x;
    vector<int> v(n+1);
    vector<int> pre(n+1);
    map<int,int> mp;
    for(int i=1; i<=n; i++){
        cin>>v[i];
        mp[v[i]]=i;
        
    }
    sort(v.begin(),v.end());
    int i = 0;
    int j=1;
    int sum=0;
    while(j<n){
        sum=v[i]+v[j];
        if(sum==x){
            cout<<mp[v[i]]<<mp[v[j]]<<"\n";
            return 0;
        }else if(sum<x){
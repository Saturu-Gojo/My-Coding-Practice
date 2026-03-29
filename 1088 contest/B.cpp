#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll mod = 676767677;


void solve(){
    int x,y;
    cin>>x>>y;
    int n = x+y;
    if(x==y){
        cout<<1<<'\n';
        
        for(int i=0; i<x; i++)cout<<1<<" ";
        for(int i=0; i<y; i++)cout<<-1<<" ";
        
        cout<<'\n';
        return;

    }
    ll diff = abs(x-y);
    ll cnt = 0;
    for(ll i =1; i*i<=diff; i++){
        if(diff%i==0){
            cnt = (cnt+1)%mod;
            if(i*i!=diff)cnt = (cnt+1)%mod;
            
        }
    }
    cnt = (cnt+mod)%mod;
    cout<<cnt<<'\n';

    if(x>y){
        for(int i=0; i<x; i++)cout<<1<<" ";
        for(int i=0; i<y; i++)cout<<-1<<" ";
    }else{
        for(int i=0; i<y; i++)cout<<-1<<" ";
        for(int i=0; i<x; i++)cout<<1<<" ";

    }

    
    cout<<'\n';
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}


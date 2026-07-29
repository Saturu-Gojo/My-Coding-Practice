#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int f(int ind, string &s,int n, bool flag){
    if(ind==n)return 0;
    if(s[ind]!='s' && flag){
        return 1 + f(ind+1,s,n,false);
    }
    else if(s[ind]!='s' && !flag){
        return f(ind+1,s,n,true);
    }else if(s[ind]=='s' && !flag){
        return 1 + f(ind+1,s,n,false);
    }else{
        return f(ind+1,s,n,false);
    }

}

void solve() {
    string s;
    cin>>s;
    int n=s.size();
    int ans = f(0,s,n,true);
    // int req = 0;
    // if(n%2==0){
    //     req= n/2 +1;
    // }else{
    //     req=n/2;
    // }
    // int cnt = 0;
    // int i=0;
    // bool flag=true;
    // vector<int> vis(n,0);
    // while(i<n){
    //     if(i%2==0 && flag){
    //         if(s[i]!='s'){
    //             cnt++;
    //             vis[i]=1;
    //         }
    //     }
    //     if(i%2==1 && !flag){
    //         if(s[i]!='s'){
    //             cnt++;
    //             vis[i]=1;
    //         }
    //     }
    //     if(i%2==1){
    //         if(s[i]=='s'){
    //             flag=false;
    //         }
    //     }
    //     if(s[i]=='s' && i%2==0){
    //         flag=true;
    //     }
    //     i++;
    // }
    // if(s[n-1]!='s' && vis[n-1]==0)cnt++;
    // cout<<cnt<<"\n";
    return;
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
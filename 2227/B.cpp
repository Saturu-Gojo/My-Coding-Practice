#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt1=0;
    int cnt2=0;
    for(int i=0; i<n; i++){
        if(s[i]=='(')cnt1++;
        else cnt2++;
    }
    if(cnt1==cnt2)cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
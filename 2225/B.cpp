#include<bits/stdc++.h>
using namespace std;
using ll = long long;



void solve(){
    string s;
    cin>>s;
    int n=s.size();
    int cnt=0;
    for(int i=1; i<n; i++){
        if(s[i]==s[i-1])cnt++;
        
    }
    if(cnt>2){
        cout<<"NO"<<'\n';

    }else{
        cout<<"YES"<<'\n';
    }
    
    
    return;
}

int main(){
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}
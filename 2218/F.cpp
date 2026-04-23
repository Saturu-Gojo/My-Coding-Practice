#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int x,y;
    cin>>x>>y;
    int n = x+y;
    if((n%2==0 && x==0) || (n%2==1 && y==0) || (x>y)){
        cout<<"NO"<<'\n';
        return;
    }

    if(n%2==0)x--;
    if(x<0){
        cout<<"NO"<<'\n';
        return;
    }

    cout<<"YES"<<'\n';
    for(int i=2; i<=n-x; i++){
        cout<<1<<" "<<i<<'\n';
    }
    int cnt =2;
    for(int i=n-x+1; i<=n; i++){
        cout<<cnt++<<" "<<i<<'\n';
    }
    return;
}

int main(){
    int t;

    cin>>t;
    while(t--){
        solve();
    }
}
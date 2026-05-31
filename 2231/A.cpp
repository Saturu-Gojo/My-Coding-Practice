#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin>>n;
    if(n==1){
        cout<<1<<'\n';
        return;
    }
    int h = 2*n;
    int l = n;
    for(int i=0; i<n; i++){
        if(i%2==0){
            cout<<h<<" ";
            h--;
        }else{
            cout<<l<<" ";
            l--;
        }
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


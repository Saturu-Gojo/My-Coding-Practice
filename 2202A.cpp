#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll x,y;
        cin>>x>>y;

        if((x-2*y)%3 == 0 && x>=2*y && x>=-4*y){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n;
    cin>>n;

    int cnt=0;

    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            cnt++;
        }
    }
    if(cnt>0)cout<<"NO"<<'\n';
    else cout<<"YES"<<'\n';
    return 0;
}
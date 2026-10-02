#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll power(int n){
    if(n==0)return 0;
    ll ans = 1;
    while(n>0){
        ans*=2;
        n--;
    }
    return ans;
}



void solve(){
    int n,k;
    cin>>n>>k;
    int a = n-k+1;
    int res = power(a);
    res+=2*(k-1);
    cout<<res<<"\n";
    
}


int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n);
        ll maxi = LLONG_MIN;
        ll mini = LLONG_MAX;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]>maxi){
                maxi = a[i];
            }
            if(a[i]<mini){
                mini = a[i];
            }
        }

        
        bool flag = false;
        vector<ll> sortedA = a;
        sort(sortedA.begin(), sortedA.end());
        
        ll k = LLONG_MAX;
            
        for(int i=0; i<n; i++){

            if(i>0 && a[i]<a[i-1])flag=true;

            if(a[i]!=sortedA[i]){
                ll freedom = max(a[i]-mini, maxi-a[i]);
                k = min(k,freedom);
            }
            
        }
        if(flag)cout<<k<<'\n';
        else cout<<-1<<'\n';
    }
    return 0;
}
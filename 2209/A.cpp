#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,c,k;
        cin>>n>>c>>k;
        vector<ll> v(n);
        for(int i=0; i<n; i++)cin>>v[i];

        ll power = c;
        sort(v.begin(),v.end());
        for(int i=0; i<n; i++){
            if(c>=v[i]){
                ll flip = (c-v[i]);
                if(flip<=k){
                    ll val = v[i]+flip;
                    power+=val;
                    c=power;
                    k-=flip;
                }else{
                    ll val = v[i]+k;
                    power+=val;
                    c=power;
                    k=0;
                }
            }else{
                break;
            }

        }
        cout<<power<<'\n';
    }
}
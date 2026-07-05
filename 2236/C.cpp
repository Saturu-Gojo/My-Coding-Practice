#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxi = 1e5 + 5;
const int mod = 1e9 + 7;

void solve() {
    ll a,b,x;
    cin>>a>>b>>x;

        //worst case
    ll ans = abs(a-b);

    // bringing a to b
    ll ta =a, tb=b;
    ll opa=0, opb=0;
    while(true){
        ll cost = opa+opb+abs(ta-tb);
        ans = min(ans,cost);
        if(ta==0)break;
        ta=ta/x;
        opa++;
    }

    // bringing b to a
    ta =a; tb=b;
    opa=0; opb=0;
    while(true){
        ll cost = opa+opb+abs(ta-tb);
        ans = min(ans,cost);
        if(tb==0)break;
        tb=tb/x;
        opb++;
    }

    //dividing both simultaneously
    ta =a; tb=b;
    opa=0; opb=0;
    while(true){
        ll cost = opa+opb+abs(ta-tb);
        ans = min(ans,cost);
        if(tb==0 && ta==0)break;

        if(ta>=tb && ta>0){
            ta=ta/x;
            opa++;
        }else if(tb>0){
            tb=tb/x;
            opb++;
        }
        
    }

    cout<<ans<<"\n";
    return;
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
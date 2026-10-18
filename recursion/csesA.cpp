#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 676767677;
ll f(int i, ll sum1, ll sum2, int n, vector<ll> &v){
    if(i==n)return abs(sum1-sum2);
    ll op1 = f(i+1,sum1+v[i],sum2,n,v);
    ll op2 = f(i+1,sum1,sum2+v[i],n,v);
    return min(op1,op2);
}

void solve()
{
    int n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0; i<n; i++)cin>>v[i];

    ll ans = LLONG_MAX;
    for(int mask=0; mask<(1<<n); mask++){
        ll sum1 = 0 , sum2=0;
        for(int i=0; i<n; i++){
            if(mask&(1<<i)){
                sum1+=v[i];
            }else{
                sum2+=v[i];
            }
        }
        ans=min(ans,abs(sum1-sum2));
    }
    cout<<ans<<"\n";
    
    return;
}

int main()
{
    
        solve();
    
}
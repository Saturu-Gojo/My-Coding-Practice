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
    int x1,x2,x3,y1,y2,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    
    
    return;
}

int main()
{
    
    solve();
    
}
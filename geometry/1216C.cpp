#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 676767677;



void solve()
{
    ll x1,x2,x3,x4,x5,x6,y1,y2,y3,y4,y5,y6;
    cin>>x1>>y1>>x2>>y2;
    cin>>x3>>y3>>x4>>y4>>x5>>y5>>x6>>y6;

    ll area = (x2-x1)*(y2-y1);
    ll ix1 = max(0LL, min(x2,x4) - max(x1,x3));
    ll iy1 = max(0LL,min(y2,y4)-max(y3,y1));
    ll area2 = ix1*iy1;
    ll ix3 = max(0LL,min(x2,x6)-max(x1,x5));
    ll iy3 = max(0LL,min(y2,y6)-max(y1,y5));
    ll area1 = ix3*iy3;
    ll ix2 = max(0LL,min({x2,x4,x6}) - max({x1,x3,x5}));
    ll iy2 = max(0LL,min({y2,y4,y6}) - max({y1,y3,y5}));

    ll overlap = ix2*iy2;

    ll visible = area-area1-area2+overlap;
    if(visible>0){
        cout<<"YES"<<"\n";
    }else{
        cout<<"NO"<<"\n";
    }
    
    return;
}

int main()
{
    
        solve();
    
}
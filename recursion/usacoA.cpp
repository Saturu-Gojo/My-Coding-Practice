#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 676767677;


void solve()
{
    freopen("pails.in","r",stdin);
    freopen("pails.out","w",stdout);
    int x,y,m;
    cin>>x>>y>>m;
    int close = 0;
    for(int i=0; i<=m; i++){
        if(i*x>m)break;
        for(int j=0; j<=m; j++){
            int n = (i*x)+j*y;
            if(n>m)break;
            close = max(close,n);
        }
    }
   
    cout<<close<<"\n";
    return;
}

int main()
{
    
    solve();
    
}
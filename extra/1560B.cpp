#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 676767677;



void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    int n =2*abs(a-b);
    int d = c-abs(a-b)<=0?c+abs(a-b): c-abs(a-b);
    if(d>n || a>n || b>n || c>n){
        cout<<-1<<"\n";
    }else{
        cout<<d<<"\n";
    }
    
    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
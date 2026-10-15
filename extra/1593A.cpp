#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 676767677;



void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    int maxi = max({a,b,c});
    int A = max(b,c);
    int B = max(a,c);
    int C = max(a,b);
    
    cout<<max(0,A-a+1)<<" "<<max(0,B-b+1)<<" "<<max(0,C-c+1)<<"\n";

      
    
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
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 676767677;

void solve()
{
    int a,b;
    cin>>a>>b;
    
    int mini = min(b,a-b);

    if(mini>0){
        cout<<mini<<"\n";
    }else{
        cout<<-1<<"\n";
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
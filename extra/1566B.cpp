#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 676767677;



void solve()
{
    string s;
    cin>>s;
    int n = s.size();
    int cnt=s[0]=='0'?1:0;
    
    for(int i=1; i<n; i++){
        if(s[i]!=s[i-1] && s[i]=='0')cnt++;
    }
    if(cnt>=2){
        cout<<2<<"\n";
    }else {
        cout<<cnt<<"\n";
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
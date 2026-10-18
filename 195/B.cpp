#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 676767677;
string f(string s){
    int n = s.size();
    string ans="";
    ans+=s[0];
    for(int i=1; i<n; i++){
        if(s[i]!=s[i-1]){
            ans+=s[i];
        }
    }
    return ans;
}

void solve()
{
    string s;
    cin>>s;
    int n = s.size();
    set<string> st;
    string fir = f(s);
    st.insert(fir);
    int cnt = 1;
    bool inc = false;
    bool dec = false; 
    for(int i=1; i<n-1; i++){
        if(s[i-1]==s[i+1] && s[i-1]==s[i]){
            inc=true;
        }
        if(s[i-1]==s[i+1] && s[i-1]!=s[i])dec=true;
    }
    if(inc)cnt++;
    if(dec)cnt++;
    cout<<cnt<<"\n";
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
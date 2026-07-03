#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n,d;
    cin>>n>>d;
    string s;
    cin>>s;

    int i = 0;
    bool flag = true;
    string ans = "";
    while(i<n){
        int val = s[i] - '0';
        if(val<d && flag){
            ans+=(d+'0');
            flag =false;
            continue;
        }
        ans+=s[i];
        i++;
    }

    if (flag) {
        ans += (d + '0');
    }
    cout<<ans<<'\n';
    
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
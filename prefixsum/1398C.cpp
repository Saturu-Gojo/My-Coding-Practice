#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxi = 1e5 + 5;
const int mod = 1e9 + 7;

void solve(){
    int n;
    cin>>n;

    vector<ll> a(n),prefix(n);
    
    string s;
    cin>>s;
    for(int i=0; i<n; i++){
        int x = s[i]-'0';
        a[i]=x;
        if(i==0)prefix[i]=a[i];
        else prefix[i]=a[i]+prefix[i-1];
    }
    
    ll cnt=0;
    unordered_map<ll,ll> mp;
    mp[0]=1;
    for(int i=0;i<n; i++){
        mp[prefix[i]-i-1]++;
    }
    for( auto it:mp){
        if(it.second>1){
            cnt+=(it.second*(it.second-1))/2;
        }
    }
    cout<<cnt<<"\n";

}

int main()
{
    int t;
    cin>>t;
    while(t--)solve();
    




    return 0;
}
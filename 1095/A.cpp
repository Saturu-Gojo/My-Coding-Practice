#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 676767677;

void solve(){
    int n;
    cin>>n;
    ll sum=0;
    int cnt=0;
    vector<int> v(n);
    unordered_map<int,int> mp;

    for(int i=0; i<n; i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    
    bool c = false;

    for(int i=0; i<n; i++){
        if(v[i]!=1){
            sum = (sum+v[i])%mod;
            sum = (sum+mod)%mod;
            
        }else{
            bool flag = false;
            for(int j=i+1; j<n; j++){
                if(v[j]!=1){
                    flag=true;
                    break;
                    
                }

            }
            if(!flag && !c){
                sum = (sum+v[i])%mod;
                sum = (sum+mod)%mod;
                c=true;
            }

        }
    }
    cout<<sum<<'\n';
    

    return;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}
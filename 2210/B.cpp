#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n), vis(n+1);
        for(int i=0; i<n; i++)cin>>v[i];

        int ans=0;
        for(int i=0; i<n; i++){
            int val = v[i];
            if(vis[i+1]==0){
                ans++;
                vis[val]=1;
            }else{
                vis[val]=1;
                continue;

            }
        }
        cout<<ans<<'\n';


    }
}
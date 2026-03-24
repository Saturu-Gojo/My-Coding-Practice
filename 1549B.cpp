#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool dfs(int ind, string s, vector<int> &vis){
    if(s[ind]=='0')return true;
    if(ind-1>=0 && s[ind-1]=='1' && vis[ind-1]==0){
        vis[ind-1]=1;
        return true;
    }
    if(ind+1<s.size() && s[ind+1]=='1' && vis[ind+1]==0){
        vis[ind+1]=1;
        return true;
    }
    return false;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;

        vector<int> vis(n,0);
        int ans=0;

        for(int i=0; i<n; i++){
            if(s2[i]=='1'){
                if(dfs(i,s1,vis))ans++;
            }
        }
        cout<<ans<<'\n';

    }
}
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<int> v(n),ans(n),s;
        unordered_map<int,int> mp;
         unordered_map<int,int> mp2;


        for(int i=0; i<n; i++){
            cin>>v[i];
            if(mp2.find(v[i])==mp2.end()){
                s.push_back(v[i]);
                mp[v[i]]++;
            }

        }
    
        sort(s.begin(),s.end());


        int val = 0;
        set<int> st;

        for(int i=n-1; i>=0; i--){
            if(i==n-1){
                ans[i]=0;
                st.insert(v[i]);
            }

        }
        for(int i=0; i<n; i++){
            cout<<ans[i]<<" ";
        }
        cout<<'\n';
        
    }
}
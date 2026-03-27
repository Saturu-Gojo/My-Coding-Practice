#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> calf(vector<pair<int,int>> st){
    sort(st.begin(),st.end());



    int len=st[0].second - st[0].first;
    vector<pair<int,int>> ans;
    ans.push_back({st[0].first,st[0].second});
    int last = st[0].second;
    int n = st.size();

    for(int i=1; i<n; i++){
        if(last>=st[i].second)continue;
        else {
            int mini = max(last,st[i].first);
           
            len+=st[i].second-mini; 
            last = st[i].second;
            ans.push_back({st[i].first,st[i].second});
        }

    }

    return ans;


}
    

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
      
        vector<pair<int,int>> st;
        map<pair<int,int>,int> mp;
        for(int i=0; i<n; i++){
            int u,v;
            cin>>u>>v;
            st.push_back({u,v});
            mp[st[i]]=i+1;
           
            
        }

        vector<pair<int,int>> f = calf(st);

        cout<<f.size()<<'\n';

        for(int i=0; i<f.size(); i++){
            cout<<mp[f[i]]<<" ";
        }
        cout<<'\n';
        
    }
}
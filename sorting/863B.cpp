#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin>>n;
    vector<int> v(2*n);
    for(int i=0; i<2*n; i++)cin>>v[i];

    int ans = INT_MAX;
    sort(v.begin(),v.end());
   
    for(int i=0; i<2*n; i++){
        for(int j=i+1; j<2*n; j++){
            
            vector<int> k;
            for(int p=0; p<2*n; p++){
                if(p!=i && p!=j)k.push_back(v[p]);
            }
            int total = 0;
            for(int p=1; p<k.size();p+=2){
                total+=k[p]-k[p-1];
            }
            ans=min(ans,total);
        }
    }

    cout<<ans<<"\n";
    
    

    
}




int main(){
    
    solve();
    
    
    return 0;
}


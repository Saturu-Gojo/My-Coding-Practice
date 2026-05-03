#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<int> v(n),ans(n);


        for(int i=0; i<n; i++){
            cin>>v[i];
        }

        for(int i=n-1; i>=0; i--){
            int small = 0;
            int large = 0;
            for(int j=i+1; j<n; j++){
                if(v[i]>v[j])small++;
                else if(v[j]>v[i])large++;
            }
            ans[i]=max(small,large);
            
        }
    
        for(int i=0; i<n; i++){
            cout<<ans[i]<<" ";
        }
        cout<<'\n';
        
    }
}
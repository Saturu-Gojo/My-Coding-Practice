#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        int ans=0;
        int maxi=-1;

        for(int i=0; i<n; i++){
            if(maxi<=a[i]){
                ans++;
                maxi=a[i];
            }

        }
        
        
        cout<<ans<<'\n';
        
        
            
    }

}


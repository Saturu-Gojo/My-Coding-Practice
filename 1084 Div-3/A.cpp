#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int maxi=0;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
            maxi=max(maxi,a[i]);

        }
        int ans =0 ;
        for(int i=0; i<n; i++){
            if(a[i]==maxi)ans++;
        }
        cout<<ans<<'\n';
    }
    return 0;
    
}
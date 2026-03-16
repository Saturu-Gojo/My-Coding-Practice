#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int> a(n,0);
        int i=0;
        a[i]=1;
        int j=0;
        while(j<n){
            if(s[i]=='R'){
                i++;
            }else{
                i--;
            }
            a[i]=1;
            j++;
        }
        int ans=0;
        for(int k=0; k<n; k++){
            if(a[k]==0)break;
            ans++;
        }
        cout<<ans<<"\n";
    }

}


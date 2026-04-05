#include<bits/stdc++.h>
using namespace std;


void solve(){
    
    vector<int> a(7);
    int n=7;
    for(int i=0; i<n; i++){
        cin>>a[i];

    }
    sort(a.begin(),a.end());
    int ind=-1;
    int sum = 0;
    for(int i=0; i<n; i++){
        if(i!=n-1)sum+=-a[i];
        else sum+=a[i];
        

    }
    cout<<sum;
    return;
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<'\n';
    }
}
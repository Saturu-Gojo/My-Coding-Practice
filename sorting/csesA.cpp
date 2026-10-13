#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    sort(v.begin(),v.end());
    int cnt = 1;
    for(int i=1; i<n; i++){
        if(v[i]!=v[i-1])cnt++;
    }
    cout<<cnt<<"\n";

    
   
}




int main(){
    
    solve();
    
    
    return 0;
}


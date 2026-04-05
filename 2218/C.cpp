#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin>>n;
    vector<int> a(3*n+1);
    vector<bool> vis(3*n+1,false);

    int j=1;

    for(int i=1; i<=3*n; i+=3){
        if(i%3==1){
            a[i]=j;
            j++;
            vis[i]=true;
        }        
    }
    for(int i=2; i<=3*n; i++){
        if(i%3==1)continue;
        
            a[i]=j;
            j++;
   
        
    }
    for(int i=1; i<=3*n; i++){
        cout<<a[i]<<" ";
    }
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
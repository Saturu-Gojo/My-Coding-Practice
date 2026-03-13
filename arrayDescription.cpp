#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;

int main(){
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }



    
    ll ans = 1;
    for(int i=0; i<n; i++){
        int cnt = 0;
        if(a[i]==0){
            
            for(int j=1; j<=m; j++){
                if((i==0 || abs(j-a[i-1])<=1)  && (i==n-1 || a[i+1]==0 || abs(j-a[i+1])<=1)){
                    cnt++;
                }
            }
            if(cnt!=0){
                ans = (ans * cnt) % mod;
            }      
            
        }
    }
    cout << ans << endl;
        
}



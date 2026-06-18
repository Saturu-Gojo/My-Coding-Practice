#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin>>n;
    vector<ll> a(n),b(n);
    for(int i=0; i<n; i++)cin>>a[i];

    for(int i=0; i<n; i++)cin>>b[i];

    vector<bool> used(n,false);

    ll op = 0;
    
    for(int i=0; i<n; i++){
        bool found = false;
        int jump = 0;
        for (int j = 0; j < n; j++){
            if(!used[j]){
                if(a[j]<=b[i]){
                    used[j]=true;
                    found = true;
                    op+=jump;
                    break;
                }else{
                    jump++;
                }
            }
            

        }

        if(!found){
            cout<<-1;
            return;
        }
        
        
        
    }
    cout<<op;
   
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
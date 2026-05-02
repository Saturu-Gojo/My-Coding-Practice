#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n, k;
    cin >> n >> k;
    
    
    vector<int> a(k + 1); 
    for(int i = 1; i <= k; i++){
        cin >> a[i];
    }
    
   
    vector<int> b(n + 1); 
 
    vector<int> cnt(k + 2, 0); 
    
    for(int i = 1; i <= n; i++){
        cin >> b[i];
        cnt[b[i]]++;
    }
    vector<int> ans;

    while(true){
        bool moved = false;
        bool check = true;
        for(int i=1; i<=n; i++){

            if(b[i] <=k){
                check = false;
                if(b[i] ==k || cnt[b[i]+1]<a[b[i]+1]){
                    cnt[b[i]]--;
                    b[i]++;
                    cnt[b[i]]++;
                    ans.push_back(i);
                    moved=true;
                    break;
                }

            }
        }
        
        if(check){
            break;
        }

        if(!moved){
            cout<<-1<<'\n';
            return;
        }
        
    }

    int m = ans.size();
    cout<<m<<'\n';

    for(int i=0; i<m; i++){
        cout<<ans[i]<<" ";
    }
    cout<<'\n';
    return;

    
    
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
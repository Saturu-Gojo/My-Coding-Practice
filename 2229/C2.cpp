#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0; i<n;i++)cin>>v[i];
    vector<ll> pre(n), suf(n+1);
    pre[0]=abs(v[0]);
    for(int i=1; i<n; i++){
        pre[i]=pre[i-1]+abs(v[i]);
    }
    suf[n-1] = v[n-1];
    for(int i=n-2; i>=0; i--){
        suf[i]=suf[i+1]+v[i];
    }

    ll best = suf[0];
    int ind = -1;
    for(int i=1; i<n; i++){
        if(v[i]>0){
            ll score = pre[i-1] + suf[i+1]-v[i];
            if(score>best){
                best = score;
                ind=i;
            }
        }
    }

    if(ind==-1){
        cout<<0<<'\n';
        return;
    }
    vector<int> ans;

    for(int i=ind-1; i>=0; i--){
        if(ans.size() & 1)v[i]=-v[i];

        if(v[i]>0)ans.push_back(i);
    }
    ans.push_back(ind);
    cout << ans.size() << "\n";
    for (int i = 0; i < ans.size(); i++){
        cout << ans[i] + 1 << " ";
    }
    cout<<'\n';
    
    return;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}


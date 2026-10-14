#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> changes(n+1);

    for(int i=1; i<=n; i++){
        int x;
        cin>>x;
        changes[i]+=changes[i-1]+x;
    }
    vector<int> score(k);
    for(int i=0; i<k; i++)cin>>score[i];

    set<int> initial;
    for(int i=1; i<=n;i++){
        initial.insert(score[0]-changes[i]);
    }
    int ans = 0;
    for(int p:initial){
        int valid=1;

        set<int> val;

        for(int i=1; i<=n; i++){
            val.insert(p+changes[i]);
        }

        for(int x: score){
            valid = valid & val.count(x);
        }
        ans+=valid;

    }
    cout<<ans<<"\n";
}

int main(){
    solve();

}   

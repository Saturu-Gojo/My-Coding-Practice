#include <bits/stdc++.h>
using ll = long long;
using namespace std;




void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<ll> v(n+1),diff(n+2);
    for(int i=1; i<=n; i++)cin>>v[i]; 

    vector<array<ll,3>> op(m+1); 
    for(int i=1;i<=m; i++){
        int x,y,d;
        cin>>x>>y>>d;
        op[i]={x,y,d};
        
    }
   

    vector<ll> cnt(m+2,0);
    for(int i=0; i<k; i++){
        int x,y;
        cin>>x>>y;
        cnt[x]++;
        cnt[y+1]--;
        
    }
    for(int i=1; i<m+2; i++)cnt[i]+=cnt[i-1];

    for(int i=1; i<=m; i++){
        ll val = cnt[i]*op[i][2];
        diff[op[i][0]]+=val;
        diff[op[i][1]+1]-=val;
    }

    for(int i=1; i<=n+1; i++){
        diff[i]+=diff[i-1];
    }
    for(int i=1; i<=n; i++){
        cout<<v[i] + diff[i]<<" ";
    }
    cout<<"\n";
    
    
    
    
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t=1;
  
    while(t--)solve();

}
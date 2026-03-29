#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll mod = 676767677;


void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n+1), b(n+1);
    vector<int> fre(n+1);
    int cnt = 0;
    for(int i=1; i<=n; i++)cin>>a[i];
    for(int i=1; i<=n; i++){
        cin>>b[i];
        if(b[i]!=-1){
            fre[b[i]]++;
            if(fre[b[i]]>1)cnt=2;
        }
    }
    if(cnt>1){
        cout<<"NO"<<'\n';
        return;
    }

    bool flag = true;
    
    vector<int> flex(n+1,0);
    for(int i=n-k+1; i<k+1; i++){
        flex[a[i]]=1;
    }
    int i=1;
    while(i<=n){
        if(b[i]==-1){
            i++;
            continue;
        }

        bool fix = (i<=n-k) || (i>=k+1);

        if(fix){
            if(b[i]!=a[i]){
                flag=false;
                break;
            }
        }else{
            if(flex[b[i]]==0){
                flag=false;
                break;
            }

        }
        i++;
    }
    if(flag)cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
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


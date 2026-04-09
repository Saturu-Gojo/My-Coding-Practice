#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0; i<n; i++)cin>>a[i];

    int ind;
    cin>>ind;
    ind--;
    int sind=-1;
    int lind = -1;
    int sboth=0;
    int lboth=0;
    int check = a[ind];
    for(int i=0; i<=ind; i++){
        if(a[i]!=check && sind==-1){
            sind = i;
        }
        if(i<ind-1  && a[i]==a[i+1] && sind!=-1){
            sboth++;
        }
    }

    for(int i=n-1; i>=ind; i--){
            if(a[i]!=check && lind==-1){
                lind=i;
            }
            if(i>ind && a[i]==a[i-1] && lind!=-1){
                lboth++;
            }
    }

    
    int sval = 0;
    if(sind!=-1) sval = ind - sind-sboth;
    int lval = 0;
    if(lind!=-1) lval = lind-ind-lboth;
    if(sval==0 && lval==0)cout<<0<<"\n";
    else if(sval>lval){
        if(sval%2==1)cout<<sval+1<<"\n";
        else cout<<sval<<'\n';
    }else{
        if(lval%2==1)cout<<lval+1<<"\n";
        else cout<<lval<<'\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;




void solve(){
    int n;
    cin>>n;
    string x;
    cin>>x;
    int cnta = 0;
    int cntb=0;
    int cnt = 0;
    for(int i=0; i<n; i++){
        if(x[i]=='a')cnta++;
        else if(x[i]=='b')cntb++;
        else cnt++;
    }
    if(n%2==0){
        if(x[0]==x[1] && (x[0]=='a' || x[0]=='b')){
            cout<<"NO"<<'\n';
            return;
        }else if(cnt==0){
            if(cnta!=cntb){
                cout<<"NO"<<'\n';
                return;
            }else{
                cout<<"YES"<<'\n';
                return;
            }
        }else{
            if(cnta>cntb+cnt){
                cout<<"NO"<<'\n';
                return;
            }
        }
    }


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
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin>>n;

    string s;
    cin>>s;


    vector<int> diff(3,0);
    diff[0]=1;
    ll pre = 0;
    ll bad = 0;
    for(int i=0; i<n; i++){
        if(s[i]=='1'){
            pre+=1;
        }else{
            pre-=1;
        }

        int mod = (pre%3+3)%3;

        bad+=diff[mod];
        diff[mod]++;
    }

   
    ll curr = 1;
    for(int i=1; i<n; i++){
        if(s[i]!=s[i-1]){
            curr++;
        }else{
            bad+= ((curr-1)/2)*(curr/2);
            curr=1;
        }
    }

    bad += ((curr-1)/2)*(curr/2);
    ll op = ((ll)n*(n+1)/2) - bad;
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
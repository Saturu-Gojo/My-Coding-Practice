#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    string s;
    cin >> n;
    cin >> s;
 
    
    int n0=0, n1=0;
    for(int i=0; i<n; i++){
        if(s[i]=='0')n0++;
        else n1++;
    }
    int L=1;
    int L0=(s[0]=='0'?1:0);
    
    int L1=(s[0]=='1'?1:0);
    
    for(int i=1; i<n; i++){
        if(s[i]!=s[i-1]){
            L++;
            if(s[i]=='1')L1++;
            else L0++;
        }
    }
    int delL = L0-L1;
    int deln = n0-n1;
    if(abs(deln)>2){
        cout<<-1<<"\n";
        return;
    }
    cout<<(n-L) + max(0,abs(deln-delL)-1)<<"\n";
    return;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
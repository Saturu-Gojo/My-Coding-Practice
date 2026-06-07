#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<ll> c(n);
    for (int i = 0; i < n; ++i) {
        cin >> c[i];
    }

    ll option1 = c[n-1];
    ll single = n-1;
    ll absorb = c[n-1]/2;
    option1+=min(absorb, single);

    ll sum = 0;
    ll single2 = 0;
    ll doubleCnt=0;
    ll absorb2 = 0;

    for(int i=0; i<n; i++){
        if(c[i]>=2){
            sum+=c[i];
            doubleCnt++;
            absorb2+=(c[i]-2)/2;

        }else{
            single2++;
        }
    }
    ll option2 = sum;
    if(doubleCnt>=2){
        option2 += min(absorb2,single2);
    }

    ll ans = max(option1, option2);
    if(ans<3){
        cout<<0<<'\n';
        return;
    }
    cout<<ans<<'\n'; 
    return;
  
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}

//9,9,2,9,9,3,9,9,1,9
//992993991
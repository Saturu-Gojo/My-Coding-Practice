#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector<int> v(n), two, three, both, neither, ans;
    for(int i = 0; i < n; i++) cin >> v[i];

    for(int i = 0; i < n; i++){
        if(v[i] % 6 == 0){
            both.push_back(v[i]);
        } else if(v[i] % 2 == 0){
            two.push_back(v[i]);
        } else if(v[i] % 3 == 0){
            three.push_back(v[i]);
        } else {
            
            neither.push_back(v[i]); 
        }
    }
    for(int i = 0; i < two.size(); i++) ans.push_back(two[i]);
    for(int i = 0; i < neither.size(); i++) ans.push_back(neither[i]);
    for(int i = 0; i < three.size(); i++) ans.push_back(three[i]);
    for(int i = 0; i < both.size(); i++) ans.push_back(both[i]);

    for(int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }
    cout << '\n';
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
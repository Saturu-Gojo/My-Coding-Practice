#include<bits/stdc++.h>
using namespace std;
vector<int> fib = {1,2,3,5,8,13,21,34,55,89,144}; 



void solve(){
    int n,m;
    cin>>n>>m;

    string s;
    int cube1 = fib[n-1];
    int cube2 = fib[n-2];
    for(int i=0; i<m; i++){
        int w,l,h;
        cin>>w>>l>>h;
        int mini = min({w,l,h});
        int maxi = max({w,l,h});
        if(cube1<=mini && cube1+cube2<=maxi)s+='1';
        else s+='0';
    }
    cout<<s<<'\n';
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
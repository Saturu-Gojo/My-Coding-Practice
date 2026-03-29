#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++)cin>>a[i];

        if(n==1)cout<<1<<'\n';
        else{
            for(int i=0; i<n; i++){
                cout<<2<<" ";
            }
            cout<<'\n';
        }
    }
    return 0;
}


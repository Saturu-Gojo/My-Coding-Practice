#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        
        ll sum = 0;
        ll cnt = 0;
        for(int i=0;i<n;i++){
            sum+=a[i];
            if(a[i]>0){
                cnt++;
            }
        }

        cout<<min(cnt,(sum-n)+1)<<'\n';
    }
}
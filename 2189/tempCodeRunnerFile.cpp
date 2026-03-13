#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        
        // cout<<val <<'\n';

        if(n%2==0){
            cout<<"-1\n";
            continue;
        }else{

        

        vector<ll> v(n);
        v[n-1]=1;
        ll val=1;
        
        ll j = 2;
        ll sum = n*(n+1);
        sum/=2;
        sum-=1;

        for(int i=1; i<n-1; i++){
            ll req = val^j;
           
            
            v[i]=req;
            sum-=req;
            j++;
            
        }

        v[0] = sum;
        for(int i=0; i<n; i++){
            cout<<v[i]<<" ";
        }
        cout<<'\n';
    }
    }
}
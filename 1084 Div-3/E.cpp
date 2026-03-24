#include<bits/stdc++.h>
using namespace std;
using ll = long long;


vector<ll> f(ll n) {
    vector<ll> factors;
    for(int i=2; i*i<=n; i++){
        bool flag = false;
        while(n%i == 0){
            if(!flag){
                factors.push_back(i);
                flag = true;
            }
            n /= i;
        }
    }
    if(n > 1){
        factors.push_back(n);
    }
    return factors;
}

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> a(n);
        for(int i=0; i<n; i++)cin>>a[i];

        bool flag = true;

        vector<ll> store;

        for(int i=0; i<n; i++){
            if(i>0 && a[i-1]>=a[i]){
                vector<ll> v=f(a[i]);
                for(auto it : v){
                    store.push_back(it);
                }
            }else{
                store.push_back(a[i]);
            }
            

        }

        bool alice = true;
        for(int i=1; i<store.size(); i++){
            if(a[i]>=a[i-1]){
                alice=false;
            }
            
        }
        if(alice){
            cout<<"Alice"<<"\n";
        }else{
            cout<<"Bob"<<"\n";
        }


        
    }
    
}
#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll ans = 1;
        ll val = n;
        if(n%2==0){
            ans = (ans * 2);
            while(n%2==0){
                n/=2;
            }   

        }
        for(ll i=3; i*i<=val; i+=2){
            if(n%i==0){
                ans = (ans * i);
                while(n%i==0){
                    n/=i;
                }
            }
        }
        cout<<ans*n<<"\n";
    }
    return 0;       
}
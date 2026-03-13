#include<bits/stdc++.h>
using namespace std;
#define ll long long

int f(int n){
    int ans =1;
    while(ans<=n){
        ans*=2;
    }
    ans/=2;
    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        
        vector<ll> a(n);

        for(int i=1; i<n-1; i++){
            a[i]=(i+1)^1;
        }
        a[n-1]=1;
        if(n%2==0){
            a[0]=n;
        }else{
            a[0]=n-1;
        }
        if(n%2==1){
            for(int i=0; i<n; i++){
                cout<<a[i]<<" ";
            }
            cout<<'\n';
        }else{
            int val = f(n);
            int r = n-val;
            swap(a[0], a[r]);
            if(r==0){
                cout<<-1<<'\n';
            }else{
                for(int i=0; i<n; i++){
                    cout<<a[i]<<" ";
                }
                cout<<'\n';
            }

        }

        

           
    }
    return 0;
}
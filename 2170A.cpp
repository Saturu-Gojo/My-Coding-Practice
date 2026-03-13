#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int last = n*n + n*n-1 + n*n-n;
        int preLast = n*n + n*n-1 + n*n-n-1 + n*n-2;
        int prePreLast = n*n-1 + n*n-n-1 + n*n-n-2 + n*n-2*n-1+n*n-n;

        if(n==1){
            cout<<1<<'\n';
        }else if(n<3){
            cout<<last<<'\n';
        }else{
            cout<<max({preLast, last, prePreLast})<<'\n';
        }
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        int a1,b1,a2,b2;
        cin>>a1>>b1>>a2>>b2;

        bool r1 = true;
        int sA=a1+a2;
        int sB=b1+b2;
        if(sA-sB>k){
            cout<<"NO"<<'\n';
        }else if(sA-sB==k){
            if(a1>b1 && a2>b2)cout<<"NO"<<'\n';
            else{
                cout<<"YES"<<'\n';
            }
        }else{
            cout<<"YES"<<'\n';
        }
    }
}
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;

        if(k==1){
            cout<<"YES"<<'\n';
            cout<<1<<'\n';
            cout<<"*"<<'\n';
            cout<<"."<<"\n";
        }else if(k==3){
            cout<<"YES"<<'\n';
            cout<<2<<'\n';
            cout<<"*."<<'\n';
            cout<<".."<<'\n';
        }else if(k==6){
            cout<<"YES"<<'\n';
            cout<<3<<'\n';
            cout<<"*.."<<'\n';
            cout<<"..*"<<'\n';
        }else if(k%5==0){
            cout<<"YES"<<'\n';
            cout<<2*k+1<<'\n';
            for(int i=0; i<2*k+1; i++){
                if(i%2==0){
                    cout<<".";
                }else{
                    cout<<"*";
                }
            }
            cout<<'\n';
            for(int i=0; i<2*k+1; i++){    
                cout<<".";
            }
            cout<<'\n';
        }else if(k%8==0){
            cout<<"YES"<<'\n';
            cout<<2*k<<'\n';
            for(int i=0; i<2*k; i++){
                if(i%2==0)cout<<"*";
                else{
                    cout<<".";
                }
            }
            cout<<'\n';
            for(int i=0; i<2*k; i++){
                
                cout<<".";
                
            }
            cout<<'\n';



        }else if(k%5 == 1){
            int f=k-2;
            cout<<"YES"<<'\n';
            cout<<2*f+1+2<<'\n';
            for(int i=0; i<2*f+3; i++){
                if(i%2==0)cout<<"*";
                else cout<<".";
            }
            cout<<'\n';
            for(int i=0; i<2*f+3; i++){
                
                cout<<".";
            }
            cout<<'\n';
            
        }else{
            cout<<"NO"<<'\n';
        }





    }
}
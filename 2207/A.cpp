#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        int maxi = 0;
        if(s[0]=='1')maxi++;
        if(s[n-1]=='1')maxi++;

        string copy = "";
        copy+=s[0];

        for(int i=1; i<n-1; i++){
            if(s[i]=='0'){
                if(s[i-1]=='1' && s[i+1]=='1'){
                    maxi++;
                    copy+='1';
                }else{
                    copy+='0';
                }
                    
            }else{
                copy+='1';
                maxi++;
            }
        }
        copy+=s[n-1];
        
        int mini=0;
        for(int i=1; i<n-1; i++){
            if(copy[i]=='1'){
                if(copy[i-1]=='1' && copy[i+1]=='1'){
                    mini++;
                    copy[i]='0';
                }

            }else{
                mini++;
            }
        }
        if(s[0]=='0')mini++;
        if(s[n-1]=='0')mini++;
        cout<<n-mini<<" "<<maxi<<'\n';
    }





    return 0;
}

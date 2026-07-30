#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int f(int n, string &s,string &res){
    if(n==0)return 0;
    res+=s[n-1];
    int m = res.size();
    
    if(m==3){
        if(res=="eip" || res=="pam"){
            res="";
            return 1 + f(n-1,s,res);
        }else{
            res =res.substr(1,2);
            return f(n-1,s,res);
        }
    }else{
        return f(n-1,s,res);
    }
    

}

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
   
    string res = "";
    int ans = f(n,s,res);
    cout<<ans<<"\n";

    
    return;
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
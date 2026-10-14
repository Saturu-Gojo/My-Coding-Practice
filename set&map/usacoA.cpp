#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){

    freopen("whereami.in", "r", stdin);
    freopen("whereami.out", "w", stdout);
    int n;
    cin>>n;
    string s;
    cin>>s;

    for(int len =1; len<=n; len++){
        set<string> st;
        bool uni = true;
        for(int i=0; i+len<=n;i++){
            string r = s.substr(i,len);
            if(st.count(r)){
                uni=false;
                break;
            }
            st.insert(r);
        }
        if(uni){
            cout<<len<<"\n";
            break;
        }
    }
    
   
}

int main(){
    solve();

}   

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        // tc = o(nlogn)
        int n;
        cin>>n;
        string s;
        cin>>s;



        for(int i=0; 2*i<n; i++){
            for(int j=1; j<s.size(); j++){
                if(s[j]==s[j-1]){
                    s.erase(j-1,2);
                }
            }
        }

        cout<<(s.empty() ? "YES\n" : "NO\n");
        

    }
    return 0;
}
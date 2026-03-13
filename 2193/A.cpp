#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,s,x;
        cin >> n >> s >> x;
        vector<int> a(n+1);
        int sum = 0;

        for(int i = 1; i <= n; i++){
            cin >> a[i];
            sum += a[i];
        }

        if(sum==s){
            cout<<"YES\n";
        }else if(s>sum){
            if(sum+x == s){
                cout<<"YES\n";
            }else if(sum+x < s){
                if((s-sum)%x == 0){
                    cout<<"YES\n";
                }else{
                    cout<<"NO\n";
                }
            }else{
                cout<<"NO\n";
            }
        }else{
            cout<<"NO\n";
        }
    }
    
}
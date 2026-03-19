#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        bool flag = true;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(i>0 && a[i-1]>a[i]){
                flag=false;
            }
        }
        if(!flag){
            cout<<1<<'\n';
        }else{
            cout<<n<<'\n';
        }
    }
    return 0;
}
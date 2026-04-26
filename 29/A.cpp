#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n;
    cin>>n;
   
    vector<pair<int,int>> v(n);
  
    for(int i=0; i<n; i++){
        int x,d;
        cin>>x>>d;
        v[i]={x,x+d};
    }
    bool flag = false;
    for(int i=0; i<n; i++){
        int f = v[i].first;
        int sec = v[i].second;
        for(int j=i+1; j<n; j++){
            if(f==v[j].second && sec==v[j].first){
                flag=true;
            }
        }
    }
    if(flag){
        cout<<"YES"<<'\n';
    }else{
        cout<<"NO"<<'\n';
    }
    return 0;
}
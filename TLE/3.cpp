#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int k,s;
    cin>>k>>s;

    int prod = min(k,s);

    int cnt = 0;

    for(int x=0; x<=k; x++){
        for(int y=0; y<=k; y++){
            if(x+y>s)continue;
            ll z = s-x-y;
            if(z>=0 && z<=k)cnt++;
        }
    }
    cout<<cnt<<'\n';

    return 0;
}
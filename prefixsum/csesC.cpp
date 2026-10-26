#include <iostream>
#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
    cin>>n;
    vector<ll> v(n);
    bool pos=false;
    ll neg = INT_MIN;
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(v[i]>0)pos=true;
        neg = max(neg,v[i]);
    }

    ll sum = 0;
    ll maxi = 0;
    
    for(int i=0; i<n; i++){
        
        sum+=v[i];
        if(sum<0)sum=0;
        maxi = max(maxi,sum);
    }
    if(!pos)cout<<neg<<"\n";
    else cout<<maxi<<"\n";

}
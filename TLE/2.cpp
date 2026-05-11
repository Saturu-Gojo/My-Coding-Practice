#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    int even=0;
    int odd=0;
    int pos = 0;
    int neg=0;

    for(int i=0; i<n; i++){
        if(v[i]%2==0){
            even++;
            if(v[i]>0)pos++;
            else if(v[i]<0)neg++;
        }else{
            odd++;
            if(v[i]>0)pos++;
            else if(v[i]<0)neg++;

        }
    }
    cout<<"Even: "<<even<<'\n';
    cout<<"Odd: "<<odd<<'\n';
    cout<<"Positive: "<<pos<<'\n';
    cout<<"Negative: "<<neg<<'\n';

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxi = 1e5 + 5;
const int mod = 1e9 + 7;

struct Point{
    int a;
    int b;
    int c;
    Point(){
        this->a=0;
        this->b=0;
        this->c=0;
    }
};

int main()
{
    freopen("hps.in","r",stdin);
    freopen("hps.out","w",stdout);

    int n;
    cin>>n;

    vector<char> a(n+1);
    vector<Point> left(n+1),right(n+1);
    
    for(int i=1; i<=n; i++){
        cin>>a[i];
        left[i]=left[i-1];
        if(a[i]=='P'){
            left[i].a++;
        }else if(a[i]=='H')left[i].b++;
        else left[i].c++;
    }

    right[n].a = a[n]=='P';
    right[n].b = a[n]=='H';
    right[n].c = a[n]=='S';

    for(int i=n-1; i>=1; i--){
        right[i]=right[i+1];
        if(a[i]=='P'){
            right[i].a++;
        }else if(a[i]=='H')right[i].b++;
        else right[i].c++;
    }

    int maxi = max({left[n].a, left[n].b, left[n].c});
    for(int i=1; i<n; i++){
        
        int l = max({left[i].a,left[i].b,left[i].c});
        int r = max({right[i+1].a,right[i+1].b,right[i+1].c});
        maxi = max({maxi,l+r});
    }
    cout<<maxi<<"\n";

   



    return 0;
}
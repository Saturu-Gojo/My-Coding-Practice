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
    freopen("bcount.in","r",stdin);
    freopen("bcount.out","w",stdout);

    int n,q;
    cin>>n>>q;

    vector<ll> a(n+1);
    vector<Point> prefix(n+1);
    
    for(int i=1; i<=n; i++){
        cin>>a[i];
        prefix[i]=prefix[i-1];
        if(a[i]==1){
            prefix[i].a++;
        }else if(a[i]==2)prefix[i].b++;
        else prefix[i].c++;
    }

    for(int i=0; i<q; i++){
        int p,q;
        cin>>p>>q;
        cout<<prefix[q].a-prefix[p-1].a<<" "<<prefix[q].b-prefix[p-1].b<<" "<<prefix[q].c-prefix[p-1].c<<"\n";
    }




    return 0;
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 676767677;
ll f(int i, ll sum1, ll sum2, int n, vector<ll> &v){
    if(i==n)return abs(sum1-sum2);
    ll op1 = f(i+1,sum1+v[i],sum2,n,v);
    ll op2 = f(i+1,sum1,sum2+v[i],n,v);
    return min(op1,op2);
}

void solve(){
    int x1,x2,x3,y1,y2,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;

    if(x1<y1)swap(x1,y1);
    if(x2<y2)swap(x2,y2);
    if(x3<y3)swap(x3,y3);

    if(x1==x2 && x2==x3){
        if(y2+y3+y1==x1){
            cout<<x1<<"\n";
            for(int i=0; i<y1; i++){
                for(int j=0; j<x1; j++){
                    cout<<"A";
                }
                cout<<"\n";
            }
            for(int i=0; i<y2; i++){
                for(int j=0; j<x1; j++){
                    cout<<"B";
                }
                cout<<"\n";
            }
            for(int i=0; i<y3; i++){
                for(int j=0; j<x1; j++){
                    cout<<"C";
                }
                cout<<"\n";
            }

            return;
        }else{
            cout<<-1<<"\n";
            return;
        }
    }

    if(x1>x2 && x1>x3){
        if(x2>y2)swap(x2,y2);
        if(x3>y3)swap(x3,y3);

        int rem = x1-y1;
        if(x2==rem)swap(x2,y2);
        if(x3==rem)swap(x3,y3);
        
        if(x2+x3==x1 && y3 == rem && y2==rem){
            cout<<x1<<"\n";
            for(int i=0; i<y1;i++){
                for(int j=0; j<x1; j++){
                    cout<<"A";
                }
                cout<<"\n";
            }
            for(int i=0; i<rem; i++){
                for(int j=0; j<x2; j++)cout<<"B";
                for(int j=0; j<x3; j++)cout<<"C";
                cout<<"\n";
            }
            return;
        }
        cout<<-1<<"\n";
        return;
    }else if(x2>x1 && x2>x3){
        if(x1>y1)swap(x1,y1);
        if(x3>y3)swap(x3,y3);

        int rem = x2-y2;
        if(x1==rem)swap(x1,y1);
        if(x3==rem)swap(x3,y3);

        if(x1+x3==x2 && y3 == rem && y1==rem){
            cout<<x2<<"\n";
            for(int i=0; i<y2;i++){
                for(int j=0; j<x2; j++){
                    cout<<"B";
                }
                cout<<"\n";
            }
            for(int i=0; i<rem; i++){
                for(int j=0; j<x1; j++)cout<<"A";
                for(int j=0; j<x3; j++)cout<<"C";
                cout<<"\n";
            }
            return;
        }
        cout<<-1<<"\n";
        return;
    }else if(x3>x2 && x3>x1){
        if(x2>y2)swap(x2,y2);
        if(x1>y1)swap(x1,y1);

        int rem = x3-y3;
        if(x2==rem)swap(x2,y2);
        if(x1==rem)swap(x1,y1);

        if(x2+x1==x3 && y1 == rem && y2==rem){
            cout<<x3<<"\n";
            for(int i=0; i<y3;i++){
                for(int j=0; j<x3; j++){
                    cout<<"C";
                }
                cout<<"\n";
            }
            for(int i=0; i<rem; i++){
                for(int j=0; j<x2; j++)cout<<"B";
                for(int j=0; j<x1; j++)cout<<"A";
                cout<<"\n";
            }
            return;
        }
        cout<<-1<<"\n";
        return;
    }

    cout<<-1<<"\n";
    return;

}

int main()
{
    
    solve();
    
    
    
}
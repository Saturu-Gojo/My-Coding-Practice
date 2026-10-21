#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 676767677;
int N;
int M;
vector<array<int,3>> cow;// s,t,c
vector<array<int,4>> air;//a,b,p,m
int mini = numeric_limits<int>().max();

void f(int ind, vector<bool> &use){
    if(ind==M){
        int cost = 0;
        for(int i=0; i<M; i++){
            if(use[i]){
                cost+=air[i][3];
            }
        }

        for(int i=1; i<=100; i++){
            int cool = 0;
            int req = 0;
            for(int j=0; j<M; j++){
                if(use[j] && air[j][0]<=i && air[j][1]>=i){
                    cool+=air[j][2];
                }
            }

            for(int j=0; j<N; j++){
                if(cow[j][0]<=i && i<=cow[j][1]){
                    req=cow[j][2];
                    break;
                }
            }
            if(cool<req)return;
        }
        mini = min(mini,cost);
        return;
    }

    use[ind]=false;
    f(ind+1,use);

    use[ind]=true;
    f(ind+1,use);
}

void check(vector<array<int,4>> p){
    int cost = 0;
    int l = p.size();
    bool valid = true;
    for(int i=0; i<l; i++){
        cost+=p[i][3];
    }

    for(int i=1; i<=100; i++){
        int cool =0;
        int required = 0;
        for(int j=0; j<l; j++){
            if(i>=p[j][0] && i<=p[j][1]){
                cool+=p[j][2];
            }
        }

        for(int j=0; j<N; j++){
            if(i>=cow[j][0] && i<=cow[j][1]){
                required=cow[j][2];
                break;
            }

        }
        if(required>cool){
            valid=false;
            break;
        }
        
    }
    if(valid)mini = min(cost,mini);

}

void solve()
{
    cin>>N>>M;
    for(int i=0; i<N; i++){
        int s,t,c;
        cin>>s>>t>>c;
        cow.push_back({s,t,c});
    }

    for(int i=0; i<M;i++){
        int a,b,p,m;
        cin>>a>>b>>p>>m;
        air.push_back({a,b,p,m});
    }

    // vector<bool> use(M,0);

    // f(0,use);

    for(int i=0; i<(1<<M); i++){
        vector<array<int,4>> inuse;
        for(int j=0; j<M; j++){
            if(i & (1<<j)){
                inuse.push_back(air[j]);
            }
        }
        check(inuse);
    }
    
    cout<<mini<<"\n";
    
    return;
}

int main()
{
    
    solve();
    
}
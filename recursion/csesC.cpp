#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 676767677;

void solve()
{
    int n = 8;
    vector<vector<bool>> block(n,vector<bool>(n)); 
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        for(int j=0; j<s.size();j++)if(s[j]=='*')block[i][j]=1;
    }

    vector<int> queen(n);
    for(int i=0; i<n; i++)queen[i]=i;
    int valid = 0;
    do{
        bool work = true;
        for(int i=0; i<n; i++){
            if(block[i][queen[i]]){
                work=false;
                break;
            }
        }
        vector<bool> taken(2*n-1);
        for(int i=0; i<n;i++){
            if(taken[i+queen[i]]){
                work=false;
                break;
            }
            taken[i+queen[i]]=true;
        }

        vector<bool> taken2(2*n-1);
        for(int i=0; i<n; i++){
            if(taken2[i-queen[i]+n-1]){
                work=false;
                break;
            }
            taken2[i-queen[i]+n-1]=true;
        }

        if(work)valid++;
    }while(next_permutation(queen.begin(),queen.end()));

    cout<<valid<<"\n";

    return;
}

int main()
{
    
    solve();
    
}
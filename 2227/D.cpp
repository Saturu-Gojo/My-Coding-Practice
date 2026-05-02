#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int palin(const vector<int>& a, int L, int R) {
    if (L > R) return 0;
    int n = a.size() / 2;
    vector<bool> present(n + 1, false);
    
    for (int i = L; i <= R; ++i) {
        if (a[i] <= n) {
            present[a[i]] = true;
        }
    }
    
    for (int i = 0; i <= n; ++i) {
        if (!present[i]) return i;
    }
    return n;
}


int check(int l, int r, vector<int> &a,int n){
    int L=l;
    int R=r;
    int mex=0;

    while(L>=0 && R<2*n && a[L] == a[R]){
        L--;
        R++;
    }
    L++;
    R--;
    return max(mex,palin(a,L,R));

}

void solve(){
    int n;
    cin >> n;
    vector<int> v(2*n);
    int f=-1;
    int s=-1;
    for(int i=0; i<2*n; i++){
        cin>>v[i];
        if(v[i]==0 && f==-1){
            f=i;
        }else if(v[i]==0 && f!=-1){
            s=i;
        }
    } 
    int mex = 0;

    mex = max(mex,check(f,f,v,n));

    mex = max(mex,check(s,s,v,n));
    int m = (f+s)/2;
    if((f+s)%2==0){
        
        mex = max(mex,check(m,m,v,n));
    }else{
        mex = max(mex,check(m,m+1,v,n));
    }
    cout<<mex<<'\n';
    return;    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

ll getLcm(ll a, ll b, ll m) {
    if (a > m || b > m) return m + 1;
    ll c = gcd(a, b);
    ll res = a / c;

    if (__builtin_mul_overflow(res, b, &res) || res > m) return m + 1;
    return res;
}

ll gC(ll n, ll m){
    if(n>m)return 0LL;
    return m/n;
}



int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b,c,m;
        cin>>a>>b>>c>>m;



        ll lab = getLcm(a, b, m);
        ll lbc = getLcm(b, c, m);
        ll lac = getLcm(a, c, m);
        ll labc = getLcm(lab, c, m);

        ll nA = gC(a, m);
        ll nB = gC(b, m); 
        ll nC = gC(c, m);
        ll nAB = gC(lab, m); 
        ll nBC = gC(lbc, m);
        ll nAC = gC(lac, m);
        ll nABC = gC(labc, m);

        ll A = nA * 6 - nAB * 3 - nAC * 3 + nABC * 2;
        ll B = nB * 6 - nAB * 3 - nBC * 3 + nABC * 2;
        ll C = nC * 6 - nAC * 3 - nBC * 3 + nABC * 2;

        
        
        cout<<A<<" "<<B<<" "<<C<<'\n';

        
    }
}
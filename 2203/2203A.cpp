#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, d;
        cin >> n >> m >> d;

        if(m>d)cout<<n<<"\n";
        else if(m==d)cout<<n/2 + n%2<<"\n";
        else {
            int x = d/m + 1;
            int rem =0;
            if(n%x==0)rem = 0;
            else rem = 1;
            cout<<n/x + rem<<"\n";
        }
       
    }
    return 0;
}
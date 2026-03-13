#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;


    vector<int> p(n);

    if(n%2==0){
        int val = 1;
        p[0]=val;
        int dif = n-1;
        for(int i=1; i<n; i++){
            int curr = val + (dif%2==0 ? -dif:dif);
            p[i]=curr;
            dif--;
            val = curr;
        }
        reverse(p.begin(),p.end());
    }else{
        int val = n/2 + 1;
        p[0]=val;
        int dif = 1;
        for(int i=1; i<n-1; i++){
            int curr = val + (dif%2==0 ? -dif:dif);
            p[i]=curr;
            dif++;
            val = curr;
        }
        p[n-1]=1;

    }
    
    
    
    
    for (int i = 0; i < n; ++i) {
        cout << p[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
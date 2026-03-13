#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        bool flag = false;
        int ind=-1;
        for(int i=0; i<n; i++){
            if(a[i]==n){
                swap(a[i], a[0]);
                break;
            }
        }

        for(int i=0; i<n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
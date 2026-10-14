#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve(){
    int n , k;
    cin>>n>>k;
    vector<int> v(n);

    for(int i=0; i<n; i++)cin>>v[i];

    set<int> st;
    for(int i=0; i<k; i++){
        int x;
        cin>>x;
        int sum=0;
        for(int j=0; j<n; j++){
            sum+=v[j];
            st.insert(x-sum);
            
            
        }
    }
    cout<<st.size()<<"\n";

    for(int x:st){
        cout<<x<<" ";
    }
    

    
}




int main(){
    
    solve();
    
    
    return 0;
}


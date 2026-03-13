// #include<bits/stdc++.h>
// using namespace std;
// using ll = long long;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;
//     vector<int> x(n);
//     for (int i = 0; i < n; i++) {
//         cin >> x[i];
//     }
//     int q;
//     cin >> q;

//     vector<int> bar(q);

//     for(int i=0; i<q; i++)cin >> bar[i];

//     vector<int> dp(n+1,0);
    


    

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
using ll =long long;
const int N = 1e5+5;

int main(){

    int n;
    cin>>n;
    vector<int> x(n),dp(N,0), cnt(N,0);


    for(int i=0; i<n; i++) {
        cin>>x[i];
        if(x[i]<N)
            cnt[x[i]]++;
        else cnt[N]++;
    }

    for(int i=1; i<N; i++){
        dp[i] = dp[i-1]+cnt[i];
    }

    int q;
    cin>>q;
    while(q--){
        int bar;
        cin>>bar;
        if(bar>=N) cout<<n<<"\n";
        else cout<<dp[bar]<<"\n";
    }

    return 0;

}
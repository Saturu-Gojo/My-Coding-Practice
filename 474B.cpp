#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxi = 1e5 + 5;
const int mod = 1e9 + 7;

int main()
{
    int n,m;
    cin>>n;

    vector<int> a(n);
    vector<int> dp(maxi,0);
    int pin = 0;
    int cnt =1;
    for(int i=0;i<n;i++){
        cin>>a[i];

        for(int j=0; j<=a[i]; j++){
            dp[pin] = cnt;
            pin++;
        }
        cnt++;
    }


    cin>>m;
    while(m--){
        int x;
        cin>>x;
        cout<<dp[x]<<endl;
    }




    return 0;
}
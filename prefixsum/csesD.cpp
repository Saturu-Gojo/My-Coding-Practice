#include <iostream>
#include <bits/stdc++.h>
using ll = long long;

using namespace std;


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, q;
    cin>>n>>q;
    vector<vector<int>> v(n+1,vector<int>(n+1));
    vector<vector<int>> prefix(n+1,vector<int>(n+1));
    for(int i=1; i<=n; i++){
        string s;
        cin>>s;
        for(int j=1; j<=n; j++){
            if(s[j-1]=='*')v[i][j]=1;
        }
    }
   
   
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            prefix[i][j] = prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1] + v[i][j];
        }
    }
    for(int i=0; i<q;i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<prefix[c][d] - prefix[c][b-1] - prefix[a-1][d] + prefix[a-1][b-1]<<"\n";
    }

    

}
#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n==1){
        cout<<1<<"\n";
        return;
    }
    int res = n;
    if(n%2==0){

        array<array<int,26>,2> freq{};
        for(int i=0; i<n; i++){
            freq[i%2][s[i]-'a']++;
        }
        int even = 0;
        int odd = 0;
        
        for(int i=0; i<26; i++){
            even = max(freq[0][i],even);
            odd = max(odd,freq[1][i]);
        }
        res = res-odd-even;
        
    }else{
        array<array<int,26>,2> prefix{},suffix{};
        for(int i=n-1; i>=0; i--){
            suffix[i%2][s[i]-'a']++;
        }

        for(int i=0; i<n; i++){
            suffix[i%2][s[i]-'a']--;

            int best[2] = {0,0};
            for(int j=0; j<26; j++){
                best[0] = max(prefix[0][j]+suffix[1][j],best[0]);
                best[1] = max(prefix[1][j]+suffix[0][j],best[1]);
            }
            res = min(res,n-best[0]-best[1]);

            prefix[i%2][s[i]-'a']++;

        }
    }
    cout<<res<<"\n";
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
    cin>>t;
    while(t--)solve();

}
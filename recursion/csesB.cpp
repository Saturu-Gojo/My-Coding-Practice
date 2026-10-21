#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 676767677;
vector<string> ans;
int cnt[26];
string s;

void f(string &curr,int n){
    if(curr.size()==s.size()){
        ans.push_back(curr);
        return;
    }

    for(int i=0;i<26; i++){
        if(cnt[i]>0){
            string next=curr+(char)('a'+i);
            cnt[i]--;
            f(next,n);
            cnt[i]++;
            
        }
    }
    return;
}

void solve()
{
    // freopen("pails.in","r",stdin);
    // freopen("pails.out","w",stdout);
   
    cin>>s;
    int n = s.size();
   
    string curr = "";
    for(int i=0; i<n; i++){
        cnt[s[i]-'a']++;
    }
    
    f(curr,n);
    int m = ans.size();
    cout<<m<<"\n";
    for(int i=0; i<m; i++){
        cout<<ans[i]<<"\n";
    }
    return;
}

int main()
{
    
    solve();
    
}
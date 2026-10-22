#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// int loc(const vector<string> &order, const string &cow) {
// 	return find(order.begin(), order.end(), cow) - order.begin();
// }

int main()
{
    freopen("lineup.in","r",stdin);
    freopen("lineup.out","w",stdout);
    // int n;
    // cin>>n;

    // const int RESTRICT_LEN = 6;
    //     // list of cows, in alphabetical order
    // vector<string> COWS = {"Beatrice", "Belinda", "Bella",     "Bessie",
    //                                 "Betsy",    "Blue",    "Buttercup", "Sue"};

    // vector<pair<string,string>> restrict;
    // for(int i=0; i<n; i++){
    //     string cow1="";
    //     string cow2="";
    //     for(int j=0; j<RESTRICT_LEN; j++){
    //         string word;
    //         cin>>word;
    //         cow1 = cow1.empty()?word : cow1;
    //         cow2 = word;
    //     }
    //     restrict.emplace_back(cow1,cow2);
    // }

    // do{
    //     bool ok = true;
    //     for(const pair<string,string> &rule: restrict){
    //         if(abs(loc(COWS,rule.first) - loc(COWS,rule.second))>1){
    //             ok = 0;
    //             break;
    //         }
    //     }
    //     if(ok){
    //         for(int i=0; i<8; i++){
    //             cout<<COWS[i]<<"\n";
    //         }
    //         break;
    //     }
    // }while(next_permutation(COWS.begin(),COWS.end()));

    int n;
    cin>>n;
    vector<string> v = {"Beatrice", "Belinda", "Bella",     "Bessie",
                                    "Betsy",    "Blue",    "Buttercup", "Sue"};
    vector<vector<int>> adj(8);
    unordered_map<string,int> mp;
    for(int i=0; i<8; i++){
        mp[v[i]]=i;
    }

    for(int i=0; i<n; i++){
        string cow1,trash,cow2;
        cin>>cow1>>trash>>trash>>trash>>trash>>cow2;

        int c1 = mp[cow1];
        int c2 = mp[cow2];
        adj[c1].push_back(c2);
        adj[c2].push_back(c1);
    }

    
    vector<bool> vis(8);
    vector<int> order;
    for(int i=0; i<v.size(); i++){
        if(!vis[i] && adj[i].size()<=1){
            vis[i]=true;
            order.push_back(i);

            if(adj[i].size()==1){
                int prev = i;
                int at = adj[i][0];
                while(adj[at].size()==2){
                    vis[at]=true;
                    order.push_back(at);
                    int a = adj[at][0];
                    int b = adj[at][1];
                    int temp = a==prev?b:a;
                    prev=at;
                    at=temp;
                }
                order.push_back(at);
                vis[at]=true;
            }


        }
    }
    for(int c:order){
        cout<<v[c]<<endl;
    }
}
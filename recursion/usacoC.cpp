#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int loc(const vector<string> &order, const string &cow) {
	return find(order.begin(), order.end(), cow) - order.begin();
}

int main()
{
    freopen("lineup.in","r",stdin);
    freopen("lineup.out","w",stdout);
    int n;
    cin>>n;

    const int RESTRICT_LEN = 6;
        // list of cows, in alphabetical order
    vector<string> COWS = {"Beatrice", "Belinda", "Bella",     "Bessie",
                                    "Betsy",    "Blue",    "Buttercup", "Sue"};

    vector<pair<string,string>> restrict;
    for(int i=0; i<n; i++){
        string cow1="";
        string cow2="";
        for(int j=0; j<RESTRICT_LEN; j++){
            string word;
            cin>>word;
            cow1 = cow1.empty()?word : cow1;
            cow2 = word;
        }
        restrict.emplace_back(cow1,cow2);
    }

    do{
        bool ok = true;
        for(const pair<string,string> &rule: restrict){
            if(abs(loc(COWS,rule.first) - loc(COWS,rule.second))>1){
                ok = 0;
                break;
            }
        }
        if(ok){
            for(int i=0; i<8; i++){
                cout<<COWS[i]<<"\n";
            }
            break;
        }
    }while(next_permutation(COWS.begin(),COWS.end()));
   
    
}
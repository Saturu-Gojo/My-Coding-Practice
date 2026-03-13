#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int r,c;
    cin >> r >> c;

    vector<string> s(r);

    for(int i=0; i<r; i++){
        cin >> s[i];
    }

    bool ok = false;
    vector<string> ans(r);
    

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if((j+1 < c) && (s[i][j] == 'S' && s[i][j+1] == 'W') || (s[i][j] == 'W' && s[i][j+1] == 'S')){
                ok = true;
            }


            if((i+1 < r) && ((s[i][j] == 'S' && s[i+1][j] == 'W') || (s[i][j] == 'W' && s[i+1][j] == 'S'))){
                ok = true;
            }

            if(s[i][j] == '.'){
                s[i][j] = 'D';
            }

            


        }
    }

    if(ok){
        cout << "No" << endl;
    }
    else{
        cout << "Yes" << endl;

        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(s[i][j] == '.'){
                    s[i][j] = 'D';
                }
            }
        }

        for(int i=0; i<r; i++){
            cout << s[i] << endl;
        }
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;

  
    if(k > n - 2){
        cout << -1 << "\n";
        return;
    }
    int zero = (n + 1) / 2;  // ceil(n/2)
    int one  = n / 2;         // floor(n/2)

    
    
    string res = "";
    int z = zero, o = one;
    
   
    int T = n - 1 - k;  
    int blk = T + 1;
    
    
    
    int zerob = (blk + 1) / 2;
    int oneb  = blk / 2;
    
    if(zero < zerob || one < oneb){
      
        swap(zerob, oneb);
        if(zero < oneb || one < zerob){
            cout << -1 << "\n";
            return;
        }
       swap(zero, one);  
        string s = "";
      
        int basez = zero / zerob;
        int extraz = zero % zerob;
        int baseo = one / oneb;
        int extrao = one % oneb;
        
        bool cur = false; 
        int zb = 0, ob = 0;
        for(int b = 0; b < blk; b++){
            if(!cur){ 
                int sz = basez + (zb < extraz ? 1 : 0);
                zb++;
                for(int x=0;x<sz;x++) s += '1'; 
            } else {
                int sz = baseo + (ob < extrao ? 1 : 0);
                ob++;
                for(int x=0;x<sz;x++) s += '0'; 
            }
            cur = !cur;
        }
        cout << s << "\n";
        return;
    }
    
    
    int basez = zero / zerob;
    int extraz = zero % zerob;
    int baseo = (oneb > 0) ? one / oneb : 0;
    int extrao = (oneb > 0) ? one % oneb : 0;
    
    string s = "";
    bool cur = true; 
    int zb = 0, ob = 0;
    for(int b = 0; b < blk; b++){
        if(cur){
            int sz = basez + (zb < extraz ? 1 : 0);
            zb++;
            for(int x=0;x<sz;x++) s += '0';
        } else {
            int sz = baseo + (ob < extrao ? 1 : 0);
            ob++;
            for(int x=0;x<sz;x++) s += '1';
        }
        cur = !cur;
    }
    cout << s << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
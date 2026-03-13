#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int> b = a;
        sort(b.rbegin(),b.rend());
        int ind = -1;
        int maxi = -1;
        int end=-1;
        bool flag = false;
        for(int i=0;i<n;i++){

            if(maxi!=-1 && a[i]!=b[i] && a[i]==maxi){
                end =i;
            }
            
            if(a[i]!=b[i] && !flag){
                
                maxi = b[i];
                ind = i;
                flag = true;
               
            }
            
            
            
        }

        int st = 0;
       

        while(st<n){
            if(st<ind){
                cout<<a[st]<<" ";
                st++;
            }else if(st>=ind && st<=end){
                while(end>=ind){
                    cout<<a[end]<<" ";
                    end--;
                    st++;
                }
                
            }else{
                cout<<a[st]<<" ";
                st++;
            }
      
        }
        cout<<"\n";
    }
}

// 6
// 5 1 2 3 6 4
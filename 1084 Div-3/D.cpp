#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
         cin>>n>>x>>y;
         vector<int> v(n);
         for(int i=0; i<n; i++)cin>>v[i];

        vector<int> out;
        vector<int> inside;
        for(int i=x; i<y; i++){
                inside.push_back(v[i]);
        }
        
        for(int j=0; j<x; j++)out.push_back(v[j]);
        for(int j= y; j<n; j++)out.push_back(v[j]);
        

        if(!inside.empty()){
            rotate(inside.begin(), min_element(inside.begin(),inside.end()), inside.end());
        }

        int m = inside.empty()?-1:inside[0];
        int j=0;
        int k = out.size();

        while(j<k && out[j]<m){
            j++;
        }
        vector<int> ans(n);
        int h = 0;
        for(int i=0; i<n; i++){
            if(i<j)ans[i]=out[i];
            else if(i>=j && i<j+inside.size()){
                ans[i]=inside[h];
                h++;
            }else{
                ans[i]=out[j];
                j++;
            }

        }
        

        for(int i=0; i<n; i++)cout<<ans[i]<<" ";
        cout<<'\n';
    }
}
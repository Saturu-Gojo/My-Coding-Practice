#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,h,l;
        cin>>n>>h>>l;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        int hm=0;
        int lm=0;

        int maxi = max(h,l);
        int mini = min(h,l);
        int both = 0;
        int neither = 0;        
        for(int i=0; i<n; i++){
            if(a[i]<=mini){
                both++;
                hm++;
                lm++;
            }else if(a[i]>maxi){
                neither++;
            }else if(a[i]<h){
                hm++;
            }else if(a[i]<l){
                lm++;
            }
        }

        int m = n-neither;

        cout<<min({hm,lm,m/2})<<"\n";

        

        
        
    }
    return 0;
}
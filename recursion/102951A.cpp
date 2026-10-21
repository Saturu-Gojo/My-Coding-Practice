#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 676767677;
ll f(int i, ll sum1, ll sum2, int n, vector<ll> &v){
    if(i==n)return abs(sum1-sum2);
    ll op1 = f(i+1,sum1+v[i],sum2,n,v);
    ll op2 = f(i+1,sum1,sum2+v[i],n,v);
    return min(op1,op2);
}

void solve()
{
    int n;
    cin>>n;
    vector<ll> x(n),y(n);
    for(int i=0; i<n; i++)cin>>x[i];
    for(int i=0; i<n; i++)cin>>y[i];


    int max_squared = 0;                   // stores the current maximum
	for (int i = 0; i < n; i++) {          // for each first point
		for (int j = i + 1; j < n; j++) {  // and each second point
			int dx = x[i] - x[j];
			int dy = y[i] - y[j];
			int square = dx * dx + dy * dy;

			
			max_squared = max(max_squared, square);
		}
	}
    cout<<max_squared<<"\n";
    
    return;
}

int main()
{
    
        solve();
    
}
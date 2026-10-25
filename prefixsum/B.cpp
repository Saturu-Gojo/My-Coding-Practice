#include <iostream>
#include <vector>
using ll = long long;

using namespace std;


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	vector<ll> v(n),prefix(n+1);
    prefix[0]=1;
    ll sum = 0;
    for(int i=0; i<n; i++){
        cin>>v[i];
        ll x = (v[i]%n + n)%n;
        sum+=x;
        sum = (sum%n+n)%n;
        prefix[sum]++;
    }

    ll ans = 0;
    for(ll p : prefix){
        ans+= (p*(p-1))/2;
    }
    cout<<ans<<"\n";

}
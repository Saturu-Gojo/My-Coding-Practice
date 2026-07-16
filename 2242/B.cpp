#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxi = 1e5 + 5;
const int INF = 1e9 + 7;

void solve() {
    int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}

	vector<int> pref1(n + 1);
	vector<int> pref2(n + 1);
	for (int i = 0; i < n; i++){
		pref1[i + 1] = pref1[i] + (a[i] == 1 ? 1 : -1);
		pref2[i + 1] = pref2[i] + (a[i] == 3 ? -1 : 1);
	}

	int mn = INF;
	for (int i = 1; i < n; i++){
		if (pref2[i] - mn >= 0){
			cout << "YES\n";
			return;
		}
		if (pref1[i] >= 0){
			mn = min(mn, pref2[i]);
		}
	}

	cout << "NO\n";

    

    
    return;

}

int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
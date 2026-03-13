#include<bits/stdc++.h>
using namespace std;
using ll = long long;


// vector<bool> sieveOfEratosthenes(int n) {
//     vector<bool> isPrime(n+1, true);
//     isPrime[0] = isPrime[1] = false;
//     for(int i=2; i*i<=n; i++){
//         if(isPrime[i]){
//             for(int j=i*i; j<=n; j+=i){
//                 isPrime[j] = false;
//             }
//         }
//     }
//     return isPrime;
// }

bool isPrimeNumber(ll n){
    if(n<2) return false;
    for(int i=2; i*i<=n; i++){
        if(n%i==0) return false;
    }
    return true;
}


vector<ll> primeFactors(ll n) {
    vector<ll> factors;
    for(int i=2; i*i<=n; i++){
        if(n%i == 0){
            if(isPrimeNumber(i)){
                factors.push_back(i);
            }
           
        }
    }
    return factors;
}

vector<ll> primeFactorsWithMultiplicity(ll n) {
    vector<ll> factors;
    for(int i=2; i*i<=n; i++){
        bool flag = false;
        while(n%i == 0){
            if(!flag){
                factors.push_back(i);
                flag = true;
            }
            n /= i;
        }
    }
    if(n > 1){
        factors.push_back(n);
    }
    return factors;
}

int main(){
    ll n;
    cin>>n;
    vector<ll> factors = primeFactorsWithMultiplicity(n);
    for(ll factor : factors){
        cout<<factor<<" ";
    }
    cout<<'\n';
    return 0;
}

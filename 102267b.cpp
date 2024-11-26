#include <bits/stdc++.h>
using namespace std;
// sieve algo for finding prime.
vector<int>sieve(int num){
    vector<bool>isPrime(num+1,true);
    isPrime[0]=isPrime[1]=false;
    for(int i = 2; i <= sqrt(num); ++i){
        if(isPrime[i]){
            for(int j = i*i; j<=num; j+=i){
                isPrime[j]=false;
            }
        }
    }
    vector<int> primes;
    for(int i = 2; i < num; ++i){
        if(isPrime[i])primes.push_back(i);
    }
    return primes;
}

int main(){
    int n;cin >> n;
    vector<int> arr = sieve(n);
    unordered_set<int> primeSet(arr.begin(),arr.end());

    bool check = true;
    for(int prime:arr) {
        int complement = n-prime;
        if(complement>1&&primeSet.count(complement)){
            cout <<prime <<" " << complement;
            check = false;
            break;
        }  
    }
    if(check)cout <<-1;
    }

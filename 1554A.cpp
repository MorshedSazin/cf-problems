#include <bits/stdc++.h>
using namespace std;
using ll = long long;
/*
            (\_/)  
           ( •_•)
          / >**>  
*/
void solition() {
    int n;scanf("%d",&n);
    ll sum=0;
    vector<ll> arr(n);
    for(auto &it: arr) cin >> it;

    for(int i=1; i<n; ++i){
        sum = max(arr[i-1]*arr[i], sum);
            }
    printf("%lld\n",sum);
}
int main() {
    int t; scanf("%d",&t);
    while(t--) solition();
    return 0;
}
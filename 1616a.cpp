#include <bits/stdc++.h>
using namespace std;
using ll = long long;
/*
 *            (\_/)
 *           ( •_•)
 *          / >**>
 */
void solution() {
    int n;cin >> n;
    vector<int> arr(n);
    set<int> final;
    for(int i=0;i<n;++i)cin>>arr[i];
    
    for(int i = 0; i < n; ++i){
        for(int j = i+1; j < n; ++j){
            if(arr[j]==arr[i]){
                arr[j] -= (arr[j]*2);
            }
        }
    }
    
    for(int i=0; i<n;++i){
        final.insert(arr[i]);
    }

    cout <<final.size()<< endl;
}
int main() {
    int t; scanf("%d",&t);
    while(t--) solution();
    return 0;
}


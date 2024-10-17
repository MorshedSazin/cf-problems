#include <bits/stdc++.h>
using namespace std;


void solve () {
    int n; cin >> n;
    map < int , int > mp;
    for (int i = 0; i < n; i++) {
        int s; cin >> s;
        mp[s]++;
    }
    int mx = 0;
    map <int , int > :: iterator it = mp.begin();
    for (int i = 0; i < n; i++) {
        if ( it->second & 1) {
            cout << "Yes\n";
            return;                                     
            }
            it++;
        }
       cout << "No\n";
    }
    int main () {
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
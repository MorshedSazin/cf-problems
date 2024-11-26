#include <bits/stdc++.h>
using namespace std;
/*
 *            (\_/)
 *           ( •_•)
 *          / >**>
 */
void solution() {
	int n,sum = 0,maX=0,miN=INT_MAX;
	cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
    	cin >> arr[i];
    	maX = max(maX, arr[i]);
    	miN = min(miN, arr[i]);
	} 
	sum = (maX * (n-1)) - (miN * (n-1));
    cout << sum << endl;
}

int main() {
    int t; cin >> t;
    while (t--) solution();
    return 0;
}
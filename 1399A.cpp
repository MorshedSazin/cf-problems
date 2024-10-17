#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solution() {
    int n; scanf("%d", &n);
    vector<int> arr(n);
    bool check = true;
   
    for (auto &it : arr) cin >> it;
   sort(arr.begin(), arr.end());
    for (int i = 1; i < n; ++i) {
			check &= (arr[i] - arr[i - 1] <= 1);
		}
    printf(check? "YES\n":"NO\n");
}

int main() {
    int t;scanf("%d",&t);
    while(t--) solution();
    return 0;
}

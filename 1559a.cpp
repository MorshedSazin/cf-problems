/*
           B I S M I L L A H I R  R A H M A N I R  R A H I M
    IUBAT - International University of Business Agriculture and Technology
            Department of Computer Science and Engineering
*/
 
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define sf(n) scanf("%d", &n)
#define s2(n) scanf("%lld", &n)
#define s3(n,m,o) scanf("%d%d%d", &n,&m,&o)
#define s4l(n, m, i, j) scanf("%lld %lld %lld %lld", &n, &m, &i, &j)
#define pnt(n) printf("%d ", n)
#define pntll(n) printf("%lld\n", n)
#define pntu(n) printf("%llu\n", n)
//__gcd(arr[i], arr[j])
// partition(arr.begin(), arr.end(), [](int x) { return x % 2 == 0; });
 
void solution() {
    ll n; cin >> n;
    vector<ll> arr(n);
    for(int i = 0; i < n; ++i) s2(arr[i]);
    int ans = accumulate(arr.begin(),arr.end(),arr[0],std::bit_and<int>());
    cout<<ans<<endl;
 
}
/*In each operation, she can select an arbitrary interval [l,r] and for all values 
i(0≤i≤r−l), replace al+i with al+i&ar−i at the same time*/
 
int main() {
    int t;sf(t);
    while(t--) solution();
    // for(int i = 0; i<100; i++) cout <<536870911<<" ";
    return 0;
}
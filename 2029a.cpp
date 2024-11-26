#include <bits/stdc++.h>
using namespace std;
/*
      (\_/)
     ( •_•)
    / >**>  
*/
typedef long long int ll;
typedef unsigned long long int ull;
#define sf(n) scanf("%d", &n)
#define sfl(n) scanf("%lld", &n)
#define sff(n,m,o) scanf("%d%d%d", &n,&m,&0)
#define sfff(l, r, k) scanf("%lld %lld %lld", &l, &r, &k)
#define pnt(n) printf("%d\n", n)
#define pntll(n) printf("%lld\n", n)
#define pntu(n) printf("%llu\n", n)
//__gcd(arr[i], arr[j])
// partition(arr.begin(), arr.end(), [](int x) { return x % 2 == 0; });

int solution() {
    ll l,r,k,x=0;sfff(l,r,k);
    int count=0;
    count = max(r/k-l+1,x);
    return count;
}


int main() {
    int t;sf(t);
    while(t--) cout << solution() <<endl;
    return 0;
}
#include <bits/stdc++.h>
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d", &n,&m)
#define sffff(n,m,r,c) scanf("%lld%lld%lld%lld", &n,&m,&r,&c)
#define pnt(n) printf("%d\n", n)
#define pntll(n) printf("%lld\n", n)
#define pntu(n) printf("%llu\n", n)

int main() {
    int t;
    ll n, m, r, c,sum;
    sf(t);
    while(t--) {
        sum = 0;
        sffff(n, m, r, c); 
        sum = (n - r) * (m - 1) + n * m - (r - 1) * m - c;
        pntll(sum);
    }
    return 0;
}

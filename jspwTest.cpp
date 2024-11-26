#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
/*
      (\_/)
     ( •_•)
    / >**>  
*/
typedef long long int ll;
typedef unsigned long long int ull;
#define sf(n) scanf("%d", &n)
#define sff(n,m,o) scanf("%d%d%d", &n,&m,&0)
#define sfff(n,m,r) scanf("%lld%lld%lld", &n,&m,&r)
#define pnt(n) printf("%d\n", n)
#define pntll(n) printf("%lld\n", n)
#define pntu(n) printf("%llu\n", n)
 
int main() {
struct timespec start, end;
clock_gettime(CLOCK_MONOTONIC, &start);

    int t;sf(t);
    while(t--){
        ll r,b,d;
        sfff(r,b,d);
        ((min(r,b)* (long long)d+1) >= max(r,b)) ? printf("YES\n"):printf("NO\n");
    }
    clock_gettime(CLOCK_MONOTONIC, &end);
    double elapsed = (end.tv_sec - start.tv_sec) + ((end.tv_nsec - start.tv_nsec)*1e-9);
    printf("Elapsed time: %.9f seconds\n", elapsed);
    return 0;
}
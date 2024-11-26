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
#define sff(n,m,o) scanf("%d%d%d", &n,&m,&0)
#define sfff(n,m,r) scanf("%lld%lld%lld", &n,&m,&r)
#define pnt(n) printf("%d ", n)
#define pntll(n) printf("%lld\n", n)
#define pntu(n) printf("%llu\n", n)
 

void solution(){
    int n;sf(n);
    int count =0;
    vector<int> arr(n);
    for(int i=0; i<n; ++i)sf(arr[i]);
    partition(arr.begin(), arr.end(), [](int x) { return x % 2 == 0; });
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            count += __gcd(arr[i], arr[j] * 2) > 1;
        }
    }
    pnt(count);
    printf("\n");
}


int main() {
struct timespec start, end;
clock_gettime(CLOCK_MONOTONIC, &start);
    int t;sf(t);
    while(t--) solution();
    // clock_gettime(CLOCK_MONOTONIC, &end);
    // double elapsed = (end.tv_sec - start.tv_sec) + ((end.tv_nsec - start.tv_nsec)*1e-9);
    // printf("Elapsed time: %.9f seconds\n", elapsed);
    return 0;
}
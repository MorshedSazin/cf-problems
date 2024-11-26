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
    ll n;
    ull time=0;
    cin >> n;
    if(n<6)time=15;
    else if(n<6 && n<8)time = 20;
    else{
        time = max(6LL, n + 1) / 2 * 5; 
    }
cout<<time<<endl;
    
}

int main() {
    int t;sf(t);
    while(t--) solution();
    return 0;
}

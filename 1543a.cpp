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
#define s2(a,b) scanf("%lld %lld", &a,&b)
#define s3(n,m,o) scanf("%d%d%d", &n,&m,&0)
#define s4l(n, m, i, j) scanf("%lld %lld %lld %lld", &n, &m, &i, &j)
#define pnt(n) printf("%d\n", n)
#define pntll(n) printf("%lld\n", n)
#define pntu(n) printf("%llu\n", n)
//__gcd(arr[i], arr[j])
// partition(arr.begin(), arr.end(), [](int x) { return x % 2 == 0; });
 
void solution() {
    ll a,b;s2(a,b);
    if(a==b)cout <<0 <<" " <<0<<endl;
    else{
        ll g = abs(a-b);
        ll m = min(a%g,g-a%g);
        cout << g <<" " <<m <<endl;
    }
}
 
 
int main() {
    int t;sf(t);
    while(t--) solution();
    return 0;
}
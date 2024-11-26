#include<bits/stdc++.h>
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
#define sf(n) scanf("%d", &n)
#define pnt(n) printf("%d ", n)
#define pntll(n) printf("%lld ", n)

int main() {
    int n,m;
    sf(n);
    deque<int> dq;
    for(int i =0; i<n; ++i)sf(m),dq.push_back(m);
    sort(dq.begin(),dq.end(),greater<int>());
    ll x=0,y=0;

    while(dq.size()) {
        x += dq.front();
        dq.pop_front();
        if(dq.size()) y += dq.back(), dq.pop_back();
    }

    ll ans = x * x + y * y;
    pntll(ans);
    return 0;
}
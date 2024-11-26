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
class SegmentTree {
public: 
    vector<int> tree; 
    SegmentTree(int n) {
        tree.assign(4 * n + 1, 0);
    }

    void build(vector<int> &a, int l, int r, int node) {
        if(l > r) return ;
        if(l == r) {
            tree[node] = a[l];
            return ;
        }
        int mid = (l + r) / 2;
        build(a, l, mid, 2 * node);
        build(a, mid + 1, r, 2 * node + 1);
        tree[node] = min(tree[2 * node], tree[node * 2  + 1]);    
    }

    void update(int node, int l, int r, int idx, int value) {
        if(l > r) return ;
        if(l == r) {
            tree[node] = value;
            return ;
        }

        int mid = (l + r) / 2;
        if(idx >= l and idx <= mid) {
            update(2 * node, l, mid, idx, value);
        }
        else {
            update(2 * node + 1, mid + 1, r, idx, value);
        }
        tree[node] = min(tree[2 * node], tree[node * 2 + 1]);
    }
    // b, e
    int query(int node, int l, int r, int b, int e) {   
        if(l >= b and r <= e) return tree[node];
        if(l > e or r < b) return INT_MAX;
        int mid = (l + r) / 2;
        int left = query(2 * node, l, mid, b, e);
        int right = query(2 * node + 1, mid + 1, r, b, e);
        return min(left, right);
    }
};
#include<iostream>
using namespace std;
using ll = long long;

void solution() {
    int n,count=0;scanf("%d",&n);
    for (ll i = 1; i <= n; i = i * 10 + 1) {
        for (int j = 1; j <= 9;  j++) {
            if (i * j <= n) count++;
        }
    }
    printf("%d\n",count);
}

int main() {
    int t;scanf("%d",&t);
    while(t--)solution();
    return 0;
}
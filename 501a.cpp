#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solution() {
    int a,b,c,d;
    scanf("%d%d%d%d", &a,&b,&c,&d);
    int misha = max((3*a/10), a-(a/250)*c);
    int vasya = max((3*b/10), b-(b/250)*d);
    if(misha==vasya)printf("Tie\n");
    else printf(misha > vasya ? "Misha\n":"Vasya\n");
}

int main() {
    solution();
return 0;
}


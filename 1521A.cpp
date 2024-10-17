#include <bits/stdc++.h>
using namespace std;
/*
            (\_/)  
           ( •_•)
          / >**>  
*/
void solition() {
    int a,b,c,d;
    scanf("%d %d", &a,&b);
    if(b == 1) {
        printf("NO\n");
    } else {
        c = a * b;
        d = c + a;
        printf("YES\n %d %d %d\n",a,c,d);
    }
}

int main() {
    int t; scanf("%d",&t);
    while(t--) solition();
}

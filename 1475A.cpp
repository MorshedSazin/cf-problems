#include <bits/stdc++.h>
using namespace std;
/*
            (\_/)  
           ( •_•)
          / >**>  
*/
void solition() {
    int n,element,odd=0,even=0; scanf("%d", &n);
    for (int i = 0; i < (n*2); ++i) {
        scanf("%d", &element);
        (element & 1)?(odd++):(even++);
    }
    printf((odd==even)?"yes\n" : "NO\n");
}
int main() {
    int t; scanf("%d",&t);
    while(t--) solition();
}
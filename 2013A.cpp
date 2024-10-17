#include <bits/stdc++.h>
using namespace std;

/*
            (\_/)  
           ( •_•)
          / >**>  
*/


void solition() {
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    int m = min(b,c);
    printf("%d\n",(a+m-1)/m);
}
     
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
    solition();
    }
}
#include <bits/stdc++.h>
using namespace std;
/*
            (\_/)  
           ( •_•)
          / >**>  
*/


void solition() {
    int a,b,c=0;
    scanf("%d %d", &a,&b);
    c = (c-a)+(b-c);
    printf("%d\n",c);
}

int main() {
    int t;
    scanf("%d", &t);
    cin.ignore();
    while (t--) solition();
    return 0;
}

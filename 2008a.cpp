#include <bits/stdc++.h>
using namespace std;
/*
            (\_/)  
           ( •_•)
          / >**>  
*/


string solition() {
    int a,b;
    scanf("%d %d", &a,&b);
    if(a %2 != 0)return "NO";
    if(a==0 && b%2!= 0) return "NO";
    return "YES";
}

int main() {
    int t;
    scanf("%d", &t);
    cin.ignore();
    while (t--) cout << solition()<<endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
// using ll = long long;

void solution() {
    int a,b; scanf("%d", &a);
    b=a;
    for(int i = 0; i <= a-1; i++){
        for(int j = a-1; j >= 0; j--){
            if(j+i==9){
                cout<<'\\';
            } else cout <<'*';
        }
        cout << endl;
        b--;
    }   
}

int main() {
    //int t;scanf("%d",&t);
     solution();
    return 0;
}

/*
00 01 02 03 04
10 11 12 13 14
21 21 22 23 34
30 31 32 33 34
40 41 42 43 44



*/
#include <bits/stdc++.h>
using namespace std;
/*
            (\_/)  
           ( •_•)
          / >**>  
*/


int main() {
    int testCase;
    cin >> testCase;
    while (testCase--) {
        int n,a,b,c;
        cin >> n;

        if(n <= 28){
            a = 1;
            b = 1;
            c = n-2;
        }else{
            c = 26;
            b = n-26;
            if(b<=27) {
                a = 1;
                b-=1;
            }else{
                a = b-26;
                b = 26;
            }
        }

        cout << static_cast<char>(96+a) << static_cast<char>(96+b) << static_cast<char>(96+c) <<endl;
    }

    return 0;
}

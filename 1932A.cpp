#include <iostream>
using namespace std;

/*
            (\_/)  
           ( •_•)
          / >**>  
*/


int thornsAndCoins(int t, string s) {
    int coin = 0, x = 0;

    for (int i = 0; i < t; i++) {
        if (s[i] == '*') {
            x++;
            if (x > 1) {
                return coin;
            }
        } else {
            x = 0;
            coin += (s[i] == '@') ? 1 : 0;
        }
    }
    return coin;
}

int main() {
    int testCase, size; 
    cin >> testCase; 

    while (testCase--) {
        string sSTRING; 
        cin >> size >> sSTRING;
        int coin = thornsAndCoins(size, sSTRING);    
        cout << coin << endl;
    }
    return 0;
}

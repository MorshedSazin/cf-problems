#include<iostream>
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
        int n, k;
        cin >> n >> k;

        char c = 'a';

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < k; ++j) {
                printf("%c", c + j);
            }
        }

        cout << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        if (m == 1 && n != 1) {
            cout << "NO" << endl;
        } else if (k >= n - 1) {
            cout << "NO" << endl;
        }else if (m == k) {
                cout<< "NO"<<endl;
        }else {
            cout << "YES" << endl;
        }
    }

    return 0;
}

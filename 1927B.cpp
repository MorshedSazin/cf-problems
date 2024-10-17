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
        int length; cin >> length;

        vector<int> trace(length);
        for (int i = 0; i < trace.size(); i++) cin >> trace[i];

        vector<int> counts(26, 0);
        string result = "";

        for (int i = 0; i < length; i++) {
            for (int j = 0; j < 26; ++j) {
                if (counts[j] == trace[i]) {
                    counts[j]++;
                    result += static_cast<char>(97 + j);
                    break;
                }
            }
        }
        cout << result << endl;
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
/*
            ^__^     
            (oo)\_______
            (__)\       )\/\
                ||----w |
                ||     ||
*/

void osuimania() {
    int n;
    vector<int> arr;
    scanf("%d", &n);
    while (n--) {
        string s;cin >> s;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '#') arr.emplace_back(i+1);
        }
    }
    reverse(arr.begin(), arr.end());
    for(auto a : arr) printf("%d ", a);
        printf("\n");
}

int main() {
    int t;
    scanf("%d", &t);
    cin.ignore();
    while (t--) {
        osuimania();
    }
    return 0;
}

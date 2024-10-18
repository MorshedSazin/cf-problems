#include <bits/stdc++.h>
using namespace std;

void solition() {
    int n;
    string s;
    cin>>n>>s;
    deque<char> q;

    if(n%2!=0){
        for (int i = 0; i < n; ++i) {
            (i % 2 == 0)?q.push_back(s[i]):q.push_front(s[i]);
        }
    }else{
        for (int i = 0; i < n; ++i) {
            (i % 2 == 0)?q.push_front(s[i]):q.push_back(s[i]);
        }
    }
    cout << string(q.begin(), q.end()) << endl;
}

int main() {
    solition();
    return 0;
}

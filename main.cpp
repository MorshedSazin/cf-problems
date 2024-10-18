#include <bits/stdc++.h>
using namespace std;

void solition() {
    int n;
    string s,final;
    cin>>n>>s;
    deque<char> q;
    for (int i = 0; i < s.length(); ++i) {
        (i % 2 == 0)? q.push_back(s[i]):q.push_front(s[i]);
    }
    final = string(q.begin(), q.end());
    cout << final << endl;
}

int main() {
    int t;scanf("%d",&t);
    while(t--)solition();
    return 0;
}

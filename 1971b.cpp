
#include <bits/stdc++.h>
using namespace std;

/*
 *          (\_/)
 *         ( •_•)
 *        / >**>
 */

void differentString() {

  string s;
  cin >> s;
  int f=0;
  for (int i=0; i<s.size()-1; i++) {
    if (s[i] != s[i+1]) {
      f = 1;
      char temp = s[i];
      s[i] = s[i+1];
      s[i+1] = temp;
    }
  }
  if (f) {
    cout << "Yes" << endl << s << endl;
  } else cout << "No" << endl;
}

int main() {
  int t; cin >> t;
  while(t--){
    differentString();
  }
  return 0;
}

#include <bits/stdc++.h>
using namespace std;

/*
 *            (\_/)
 *           ( •_•)
 *          / >**>
 */

int main() {
  int testase; cin >> testase;
  while(testase--){
    int x, y; cin >> x >> y;
    if(x > y){
      int temp = x;
      x = y;
      y = temp;
    }
    cout << x <<" " << y << "\n";
  }

  return 0;
}

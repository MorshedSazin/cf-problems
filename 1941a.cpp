#include <bits/stdc++.h>
using namespace std;
/*
            (\_/)  
           ( •_•)
          / >**>  
*/
 
class Solution {
public:
    int sumofCoins(int left[], int c, int right[], int a, int b) {
      int sum = 0;
      for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
          if(left[i]+right[j] <= c) {
            sum++;
          }
        }
      }
    return sum;
  }
};
 
int main() {
 
  int testCase;
  cin >> testCase;
  
  while(testCase--) {
    int a, b, c; cin >> a >> b >> c;
    int left[a], right[b];
    for(int i = 0; i < a; i++) cin >> left[i];
    for(int i = 0; i < b; i++) cin >> right[i];
    Solution solution;
    cout << solution.sumofCoins(left, c, right, a, b) << endl;
  }
    return 0;
}
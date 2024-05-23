/*
            _...._
        _.dMMMMMMMMMb.
    ..dMMMMMMMMMMMMMMMb
  .dMMMMMMMMMMMMMMMMMMMMb.
 dMMMMMMMMMMMMMMMMMMMMMMMM.
 MMMMMMMP'`YMMMMMMMMMMMMMMMb
 MMMMMMP    MMMMMMMMMMMMMMMM
dMMMMMP     `MMMMMMMMMMMMMMMb
MMMMMM~=,,_  `MMMMMMMMMMMMMMM
MMMMMMP,6;    `MMMMMMMMMMMMMMb
MMMMMM|         ```^YMMMMMMMMM
MMMMMM:   -~        / |MMMMMMMb
`MMMMM/\  _.._     /  |MMMMMMMM
  `YMM\_`.`~--'    \__/MMMMMMMM!
    MMMMMM\       _.' _sS}MMMMMb
    `YMMMMMb.__.sP.---.  MMMMMMM
      ``YMMMMMMMP'        \MMMMMb
          ``MMMd;          MMMMMM
              dP|          :MMMMMb.
          _.sP'             :MMMMMM
      _.s888P'   ,  .-. .-. |MMMMM}
   .s888888P    ,_|(  fsc  )|MMMM
 .d88888888;     `\ `-._.-' ;;M'
 8888888888|       :         :;,
 8888888888;       |         |`;,_
 `Y88888888b     _,:         |/Y\;
    `^Y88888ssssSP~":        ;SsP/
        """\        |         ;
            ;       |         |
            ;       ;         |
           /      .'          |
         .'    .-'            ;
        /_...-'             .'\
       .'              _..-'   :
      /         __.--""         :
------------------------------------------------*/
#include <iostream>
#include <vector>
using namespace std;

const int MOD = 998244353;

long long solvePuzzle(int c1, int c2, int c3, int c4) {
    vector<vector<long long>> dp(4, vector<long long>(4));

    dp[0][0] = 1;
    dp[1][1] = 1;
    dp[2][2] = 1;
    dp[3][3] = 1;

    // Calculate dp array
    for (int i = 1; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            dp[i][j] = (dp[i - 1][(j + 1) % 4] + dp[i - 1][(j + 3) % 4]) % MOD;
        }
    }

    // Calculate total number of ways for each test case
    long long result = 1;
    result = (result * dp[c1 - 1][0]) % MOD;
    result = (result * dp[c2 - 1][1]) % MOD;
    result = (result * dp[c3 - 1][2]) % MOD;
    result = (result * dp[c4 - 1][3]) % MOD;

    return result;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int c1, c2, c3, c4;
        cin >> c1 >> c2 >> c3 >> c4;

        // Check if it's impossible to solve the puzzle
        if ((c1 % 2 + c2 % 2 + c3 % 2 + c4 % 2) > 1) {
            cout << "0" << endl;
        } else {
            long long result = solvePuzzle(c1, c2, c3, c4);
            cout << result << endl;
        }
    }

    return 0;
}

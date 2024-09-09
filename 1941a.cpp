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
#include <bits/stdc++.h>
using namespace std;

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


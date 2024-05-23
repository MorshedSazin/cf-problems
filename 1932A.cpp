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
using namespace std;

int thornsAndCoins(int t, string s) {
    int coin = 0, x = 0;

    for (int i = 0; i < t; i++) {
        if (s[i] == '*') {
            x++;
            if (x > 1) {
                return coin;
            }
        } else {
            x = 0;
            coin += (s[i] == '@') ? 1 : 0;
        }
    }
    return coin;
}

int main() {
    int testCase, size; 
    cin >> testCase; 

    while (testCase--) {
        string sSTRING; 
        cin >> size >> sSTRING;
        int coin = thornsAndCoins(size, sSTRING);    
        cout << coin << endl;
    }
    return 0;
}

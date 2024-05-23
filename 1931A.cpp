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

int main() {
    int testCase;
    cin >> testCase;
    while (testCase--) {
        int n,a,b,c;
        cin >> n;

        if(n <= 28){
        	a = 1;
        	b = 1;
        	c = n-2;
        }else{
        	c = 26;
        	b = n-26;
        	(b<=27) ? a = 1, b-=1,0 : a = b-26,b = 26,0;
        }
        cout << static_cast<char>(96+a) << static_cast<char>(96+b) << static_cast<char>(96+c) <<endl;
    }
    
    return 0;
}


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
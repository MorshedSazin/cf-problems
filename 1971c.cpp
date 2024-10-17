#include<bits/stdc++.h>
using namespace std;

/*
 *          (\_/)
 *         ( •_•)
 *        / >**>
 */

void claculate(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if( a > b ) {
        int temp = a;
        a = b;
        b = temp;
    }
    if( c > d ) {
        int temp = c;
        c = d; d = temp;
    }
    bool check = false;
    for(int i = a; i <= b; i++){
        if(i == c || i == d ){
            if( a < c && b > c &&  b > d ){
                check = false;  break;
            }else check = true;
        }
    }
    cout << (check ? "Yes" : "No") << endl;
}
int main(){

    int testcase; cin >> testcase;
    while(testcase--){
        claculate();
    }
}

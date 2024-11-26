#include <bits/stdc++.h>
using namespace std;

/*
 *            (\_/)
 *           ( •_•)
 *          / >**>
 */

void solution() {
	int a,b,answer,diff;
	cin >> a >> b;
    if(a>=b){
        answer = a;
    }else {
       diff = b-a;
       diff = a*2;
       if(diff>=b){
       answer = diff-b; 
       }else{
        answer = 0;
       } 
       
    }
    cout << answer<<endl;
    
}

int main() {
    int t; cin >> t;
    while (t--) solution();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solution() {
    string s,t;
    cin >> s >> t;
    int count = 0,maX = max(s.length(),t.length()),miN = min(s.length(),t.length());
    for(int i=s.length()-1,j=t.length()-1; i>=0&&j>=0; --i,--j){
        if(s[i]==t[j]){
            count++;
        }else{
            break;
        }
    }
    int result = (maX-count)+(miN-count);
    cout<<result<<endl;
}
int main() {
    solution();
    return 0;
}

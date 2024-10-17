// #include<stdio.h>
// #include<string.h>


// void solution(int &b){
//     int arry[7];
//     for(int i =0; i<b; ++i){
//         if(i==)arry[i] = 1;
//         else if(i==b-1)arry[i]=2;
//         else arry[i]=3;
//     }
//     for(int i = 1, j = b-1; i<=b; ++i, --j){
//         for(int k=0;k<b;++k)printf("%d",arry[k]);

//         int temp = arry[i];
//         arry[i] = arry[i-1];
//         arry[i-1] = temp;

//         temp = arry[j-1];
//         arry[j-1] = arry[j];
//         arry[j] = temp;

//         printf("\n");
//     }
// }

// int main() {
//     int a,b;scanf("%d%d",&a,&b);
//     while(a--){
//         solution(b);
//     }
// }



#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solution() {
    string s,t;
    cin >> s >> t;
    int count,miN,maX;
    count = 0;
    maX = max(s.length(),t.length());
    miN = min(s.length(),t.length());
    for(int i=s.length()-1,j=t.length()-1; i>0; --i,--j){
        if(t[i]==s[j]){
            count++;
        }
    }
    int result = (maX-count)+(miN-count);
    cout<<result<<endl;
}
int main() {
    // int t; scanf("%d",&t);
    //while(t--)
    solution();
    return 0;
}


#include<iostream>
#include<string>
using namespace std;

int main(){
   string s;  getline(cin, s);            
   int a=0, n1 = s[0]-'0', n2 = s[2]-'0';   
   if(n1>n2){
      n1 = n1 - n2;
      n2 = n1 + n2;
      n1 = n2 - n1;
   }

   if(n1==1 && n2==2)a=3;
   if(n1==2 && n2==3)a=1;
   if(n1==1 && n2==3)a=2;
   cout <<a<<endl;
 return 0;
}

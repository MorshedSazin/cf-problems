#include<iostream>
#include <string>
using namespace std;

int main(){
    int n,k=0,z=0;
    cin>>n;
    while(n--){
        int count = 0,indx1 = 0,indx2 = 0;
        int x;
        cin>>x;
        string s;
        cin>>s;
        for(int i = 0; i<x; ++i){
            if(s[i]=='B'){
                indx1=i; 
                break;
            }
        }
        for(int j = x-1; j>=0; j--){
            if(s[j]=='B'){
                indx2=j+1; 
                break;      
            }
        }
        count=(indx2)-(indx1);
        cout<<count<<endl;
    }
}

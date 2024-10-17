#include <bits/stdc++.h>
using namespace std;
/*
            (\_/)  
           ( •_•)
          / >**>  
*/
int alternatingSum(){
        int sum=0, a;scanf("%d",&a);
        vector<int> arr(a);
        for(int i = 0; i < a; ++i)scanf("%d",&arr[i]);
        
        for(int i=0;i<a;++i){
            if(i%2==0)sum+=arr[i];
            else sum-=arr[i];
        }
    return sum;
}

int main(){
    int t;scanf("%d",&t);
    while(t){
        cout<<alternatingSum()<<endl;;
        --t;
    }
return 0;

}

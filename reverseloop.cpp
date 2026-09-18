#include<bits/stdc++.h>
using namespace std;
int main (){
    int i ,j ,K, n=5;
   for(int i=5;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        
        }
        cout<<endl;

    }

      
    for(int i =1;i<=n;i++){
        for(int j=1;j<=i;j++){// j< =n
            cout<<"*";//cout<<i;1 type wil be print
            

        }
        cout<<endl;
    }
    for(i=1;i<=5;i++){
        for(j=1;j<=5-i;j++){
            cout<<" ";

        }
        for(K=1;K<=i;K++){
            cout<<"*";
        }
        cout<<endl;
    }
   
    for(i=1;i<=5;i++){
        for(j=2;j<=i;j++){
            cout<<" ";
        }
        for(j=1;j<=(n-i+1);j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
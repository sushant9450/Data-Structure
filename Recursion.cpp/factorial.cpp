#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n==0||n==1){
    return 1;
}
   return n*factorial(n-1);
}
int main(){
    int ans=factorial(5);
    cout<<ans<<endl;
    return 0;
}


//OTHER METHOD  BY ONLY USING FUNCTION
// #include <bits/stdc++.h>
// using namespace std;
// int factorial(int n){
//     int fact =1;
//     for(int i=1;i<=n;i++){
//         fact=fact*i;
//     }
//     cout<<"factorial("<<n<<")="<<fact<<endl;
//     return fact;
// }

// int main() {
//  factorial(6);
//  factorial(5);
//  factorial(4);
//  factorial(3);
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int i;
bool isPrime(int n){
    if(n==1){
        return false;
    }
    for(int i=2; i<n; i++){
    if(n%i==0){
        return false;
    }
}
    return true;
    //return true;
}
int main(){
cout<<isPrime(41)<<endl;
cout<<isPrime(40)<<endl;
return 0;
}
// Either use above on one beloew one

/*bool isPrime(int n){
    if(n==1){
        return false;
    }
    for(int i=2; i*i<n; i++){
    if(n%i==0){
        return false;
    }
}
    return true;
    //return true;
}
int main(){
cout<<isPrime(41)<<endl;
return 0;
}*/

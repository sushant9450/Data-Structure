#include<bits/stdc++.h>
using namespace std;
void print(int n){
    if(n==0){
        return ;
    }
    cout<<n<<" ";  //kaam                     print(n-1);       this is used for increasing order
    print(n-1);    // barosa or faith         cout<<n<<" "; 
}
int main(){
    print(110);
    return 0;
}
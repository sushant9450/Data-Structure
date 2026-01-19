#include <bits/stdc++.h>
using namespace std;
bool isEven(int n){
    if(n%2==0){
        return true;
    }else{
        return false;
    }
}
int main(){
    cout<<isEven(21)<<endl;
    return 0;
}
/* another method*/
/*int check(int);
int main()
{
    int a;
    cin>>a;
    if(check(a))
    cout<<"n is even";
    else
    cout<<"n is odd";
    return 0;
}
int check(int a)
{
    return a%2==0;
}*/
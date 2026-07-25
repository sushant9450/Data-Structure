#include<bits/stdc++.h>
using namespace std;
int reverse(int n){
    int rev =0;
    while(n>0){
        int a=n%10;
        rev=rev*10+a;
        n=n/10;
    }
    return rev;
}

bool isPalidrome(int num){
    int g=reverse(num);   //yha pe hm nuber ko reverse kr rhe hai or usko ekk g naam ke variable me store kra rha ha
    return num==g;        //yha pe check kr rha hai ki kya wo revese number original number ke barabr hai ya nhi
}

int main(){
    cout << isPalidrome(121) << endl;
    cout << isPalidrome(1231) << endl;
    cout << isPalidrome(159) << endl;
    return 0;
}
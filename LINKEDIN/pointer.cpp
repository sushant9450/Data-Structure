#include <bits/stdc++.h>
using namespace std;

int main() {
int a=10;
int p_val=1000;
int q_val=2000;
int *p=&a;
int **q=&p;
cout<<a<<endl;
cout<<p<<endl;
cout<<*p<<endl;
cout<<q<<endl;
cout<<&p<<endl;
cout<<*q<<endl;
    return 0;
}


// p → address of a
// *p → value of a
// q → address of p
// *q → value of p (yaani address of a)
#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,rev=0,a,m;
    cin>>n;
    m=n;
    while(n>0)
    {
        a =n%10;
        rev =rev*10+a;
        n=n/10;
    }
    cout<<rev;
    if (rev==m)
    cout<<"n is palidrome";
    else 
    cout<<"n is not palidrome";
    return 0;
}
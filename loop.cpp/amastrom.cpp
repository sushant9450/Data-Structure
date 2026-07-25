#include<bits/stdc++.h>
using namespace std;
int main (){ 
    int n,sum=0,a,m;// a= last digit
    cin>>n;
    m=n;
    while (n>0)
    {
       a=n%10;
       sum=sum+pow(a,3);
       n=n/10;/* code */
    }
    if (sum=m=m)
    cout<<"n is amstome";
    else
    cout<<"n is not amstome";
    return 0;
}
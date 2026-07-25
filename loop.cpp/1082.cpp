#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n, sum=0,lastdig;
   cin>>n;
    while (n>0)
    {
     lastdig=n%10;
     sum= sum+lastdig;
     n=n/10; 
    }
    cout<<sum<<endl;
return 0;    
}
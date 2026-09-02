#include <bits/stdc++.h>
using namespace std;
vector<int>dat(1001,0);   // ye dat wala bs hata de to 1000 tk find krne me ise bhaut time lag jaye ga
int fib(int n)
{
    if(n==1)
       return 0;
    if(n==2)
       return 1;
    if(dat[n]==0)
        dat[n]=fib(n-1)+fib(n-2);
    return dat[n];
}

int main() {
    for(int i=0;i<=1000;i++){
        cout<<i<<": "<<fib(i)<<endl;
    }

    

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int value(int n)
{
    if(n==0)
        return 0;
    else
       return (n%10+value(n/10));
}
int main() {
    int x=value(1234);
    cout<<x;

    return 0;
}
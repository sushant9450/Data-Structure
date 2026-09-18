#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c;
    cin>>a>>b>>c;
    
    double d =(b*b)-(4*a*c);
    double real =(-b-(sqrt(d)))/(2*a);
    double imag=(-b+(sqrt(d)))/(2*a);
    cout<<real<<imag<<endl;
    return 0;
   
}
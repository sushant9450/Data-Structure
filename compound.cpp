#include<bits/stdc++.h>
using namespace std;
int main()
{
    double P,R,T;// PRINCIPAl,RATE,TIME
    cin>>P>>R>>T;
    double A=(P * ( pow((1+R/100),T)));//AMOUNT
    double CI=A-P;//COMPOUND INTERST
    cout<<CI<<endl;
}
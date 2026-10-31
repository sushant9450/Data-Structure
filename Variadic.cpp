#include <bits/stdc++.h>
#include<cstdarg>
using namespace std;
void display(int size,...)
{
    int n;
    int totalmarks=0;
    va_list args;
    va_start(args,size);
    for(int i=0;i<size;i++)
    {
        n=va_arg(args,int);
        cout << "Subject " << i+1 << " totalmarks = " << n << endl;
        totalmarks=totalmarks+n;
    }
    va_end(args);
    float percentage = ((float)totalmarks / (size * 100)) * 100;

    cout << "\nTotalmarks = " << totalmarks << endl;
    cout << "Percentage = " << percentage << "%" << endl;

    if(percentage >= 40)
        cout << "Result = PASS" << endl;
    else
        cout << "Result = FAIL" << endl;
}

int main() {

    display(4,94,96,95,94);

    return 0;
}
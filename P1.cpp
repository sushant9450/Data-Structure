#include <bits/stdc++.h>
using namespace std;

class Example
{
    int a,b;
public:
  void getdata(int,int);
  void display();
  Example sum(Example &); //passing obj as reference
};

void Example::getdata(int x,int y)
{
    a=x;
    b=y;
}
 void Example::display()
 {
    cout<<a<<" "<<b<<endl;
 };

 Example Example::sum(Example &E1)     // return type bhi example hai and class bhi example hai
{
    Example S;
    S.a = a + E1.a;  // a->(10) and E1.a->(100)
    S.b = b + E1.b;   // b->(20) ans E1.b->(200)
    return S;
}
int main() {
    Example  A,B,C;
    A.getdata(10, 20);
    A.display();
    B.getdata(100, 200);
    B.display();

    C = A.sum(B);   //B->E1
    C.display();
    

    return 0;
}
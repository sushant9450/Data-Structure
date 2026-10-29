// #include <bits/stdc++.h>
// using namespace std;

// class Example
// {
//     int a,b;
// public:
//   Example(int x,int y){
//     a=x;
//     b=y;
//   }
//   void display();
//   Example sum(Example &); //passing obj as reference
// };

//  void Example::display()
//  {
//     cout<<a<<" "<<b<<endl;
//  };

//  Example Example::sum(Example &E1)     // return type bhi example hai and class bhi example hai
// {
//     Example S(0,0);
//     S.a = a + E1.a;  // a->(10) and E1.a->(100)
//     S.b = b + E1.b;   // b->(20) ans E1.b->(200)
//     return S;
// }
// int main() {
//     Example  A(10, 20);
//     Example  B(100, 200);
//     A.display();
//     B.display();

//     Example C= A.sum(B);   //B->E1
//        C.display();
    

//     return 0;
// }


/******************************OR*******************************************/

#include <bits/stdc++.h>
using namespace std;

class Example
{
    int a,b;
public:
      Example();
      Example(int x,int y);
      void display();
      Example sum(Example &); //passing obj as reference
};

  Example::Example()
{
    a=0;
    b=0;
}

Example::Example(int x,int y)
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
    Example S;   //Example S(0,0) ->when calling only parameterised constructor;
    S.a = a + E1.a;  // a->(10) and E1.a->(100)
    S.b = b + E1.b;   // b->(20) ans E1.b->(200)
    return S;
}

int main() {
    Example  A(10, 20);
    A.display();
    Example  B(100, 200);
    B.display();

    Example C;     // Example C(0,0); --->when calling only parameterised constructor
    C= A.sum(B);   //B->E1
    C.display();
    

    return 0;
}
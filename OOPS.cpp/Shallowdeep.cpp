#include <bits/stdc++.h>
using namespace std;
 class Car{
    public:
    string name;
    string color;
    int *mileage;

    Car(string name,string color){
        this->name=name;
        this->color=color;
        mileage=new int;  //Dynamic Allocation
        *mileage=12;
    }
    //Deep copy constructor
    Car(Car &original){
        cout<<"copying original to new..\n";
        name = original.name;
        color = original.color;
        mileage= new int;
        *mileage = *original.mileage;
    }

 };
int main() {
   Car c1("maruti","red");
   Car c2(c1);
   cout<<c2.name<<endl;
   cout<<c2.color<<endl;
   cout<<*c2.mileage<<endl;
    

    return 0;
}
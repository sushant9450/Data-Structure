#include <bits/stdc++.h>
using namespace std;

//ENCAPSULATION
//  class Student{

//     private:
//     int name;
//     int age;
//     int height;

//     public:
//     int getAge(){
//         return this->age;
//     }
//  };

// int main() {
    
//     Student first;
//     cout<<"CODE CHAL TO RHA HAI NA"<<endl;
    

//     return 0;
// }




//INHERITANCE

class Human{

    public:
    int height;
    int weight;
    int age;

    public:
    int getAge(){
        return this->age;
    }

    void setWeight(int w){
        this->weight=w;
    }

};

class Male: public Human{ //sabse main yhi hai is se male class inheriate kr rha hai human class ko
 //agr uper private ho gya to Male class access nhi kr paye ga   
    public:
    string color;

    void sleep(){
        cout<<"Male is Sleeping"<<endl;

    }
};


int main(){
    Male object1;
    cout<<object1.age<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.height<<endl;

    cout<<object1.color<<endl;

    object1.setWeight(1234);
    cout<<object1.weight<<endl;
    object1.sleep();
    return 0;
}
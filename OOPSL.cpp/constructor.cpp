#include <bits/stdc++.h>
using namespace std;

//  class Hero{
//     public:
//     Hero(){ // constructor
//         cout<<"constructor called"<<endl;
//     }
    
//  };
// int main() {

//     cout<<"Hii"<<endl;
//     Hero sushant;  //constructor called
//     cout<<"hello"<<endl;
//     return 0;
// }


class Hero{

    private:
    int health;
    public:
    Hero(){
        cout<<"Constructor called<";
    }

     //Parameterised constructor  // we can make multiple parametrised constructor
    Hero(int health){
        cout<<"this->"<<this<<endl;  //this store current object ka address
        this->health=health;  //jo this ke sath healths hai wo upper wale ki bat kr rha hai or jo =health hai wo (int health) ki bat kr rha hai
    }

      int getHealth(){
        return health;
    }

    void setHealth(int h){
        health=h;
    }
};



int main(){
    Hero ramesh(10); //staticaly object created  Yaha parameterized constructor call hoga.
    cout<<"address of ramesh:"<<&ramesh<<endl;  //Ye object ka actual memory address print karega.Ye same hoga jo constructor me this print hua tha.
    cout<<ramesh.getHealth();

}

// jb hm khud ka constructor likh denge to jo phele se constructor bana hai wo katma ho jaye ga
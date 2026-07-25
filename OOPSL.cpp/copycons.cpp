// #include <bits/stdc++.h>
// using namespace std;
// class Hero{
// private:
// int health;

// public:
// char level;


// //simple constructor
// Hero(){
//     cout<<"simple constructor called"<<endl;  // no use of this line
// }

// //parameterised constructor
// Hero(int health){
//     this->health=health;
// }

// Hero(int health, char level){
//     this->level=level;
//     this->health=health;
// }

// //Khud ka banaya hua copy constructor
// Hero(Hero& temp){  /// ye hamesa pass by reference ho ga(agr aisa nhi kryr to temp hero ko call kar ga or hero tamp ko bass yhi loop chalta rahe ga) 
//     cout<<"copy constructor called"<<endl;
//     this->health=temp.health;
//     this->level=temp.level;
// }
// void print(){
//     cout<<"health"<<this->health<<endl;
//     cout<<"level"<<this->level<<endl;
// }

// int getHealth(){
//     return health;
// }

// char getLevel(){
//     return level;
// }

// void setHealth(int h){
//     health=h;
// }

// void setLevel(char ch){
//     level=ch;
    
// }

// };
// int main() {
 
//     Hero S(70,'C');
//     S.print();


//     //copy constructor

//     Hero R(S);
//     R.print();

//     return 0;
// }




#include<bits/stdc++.h>
using namespace std;
class Car{
    public:
    string name;
    string color;

    Car(string name,string color){
        this->name=name;
        this->color=color;
    }
};

int main(){
    Car c1("maruti 800","blue");
    Car c2(c1);
    cout<<c2.name<<endl;
    cout<<c2.color<<endl;
}
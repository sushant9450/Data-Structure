#include <bits/stdc++.h>
using namespace std;

 class Hero {
    private:
    int health;
    char level;
    public:  // sabse main to yhi hai bhai
    // void print(){
    //     cout<<level<<endl;
    // }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }
     
    void setHealth(int h){
        health=h;
    }

    void setLevel(char ch){
        level=ch;
    }


 };


 int main(){

    //static allocation
    Hero a;
    a.setHealth(10);
    a.setLevel('C');
    cout<<"firts:"<<a.getHealth()<<endl;
    cout<<"second:"<<a.getLevel()<<endl;
 
    //Dynamic allocation

    Hero *b= new Hero;
    b->setHealth(52);
    b->setLevel('A');
    cout<<"third:"<<(*b).getHealth()<<endl;
    cout<<"fourt:"<<(*b).getLevel()<<endl;

    cout<<"fifth:"<<b->getLevel()<<endl;
    cout<<"six:"<<b->getHealth()<<endl;


 }
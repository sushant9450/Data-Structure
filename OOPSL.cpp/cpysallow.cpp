#include <bits/stdc++.h>
using namespace std;
class Hero{
private:
int health;

public:
char *name;
char level;


//simple constructor
Hero(){
    cout<<"simple constructor called"<<endl;  // no use of this line
    name=new char[100];
}

//parameterised constructor
Hero(int health){
    this->health=health;
}

Hero(int health, char level){
    this->level=level;
    this->health=health;
}
// Hero(Hero& temp){ 
//     cout<<"copy constructor called"<<endl;
//     this->health=temp.health;
//     this->level=temp.level;
// }
void print(){
    cout<<endl;
    cout<<"[ Name: "<<this->name<<" ,";
    cout<<"health"<<this->health<<" ,";
    cout<<"level"<<this->level<<" ]";
    cout<<endl<<endl;
}

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

void setName(char name[]){
    strcpy(this->name, name);
}

};
int main() {
  Hero h1;
  h1.setHealth(50);
  h1.setLevel('Z');
  char name[9]="Sushant";
  h1.setName(name);

  h1.print();

  //use defauly copy constructor
  Hero h2(h1);
  h2.print();

  h1.name[0]='G';
  h1.print();

   h2.print();

}


//isme same memory ko 2 name se access keya ja rha hai
#include <bits/stdc++.h>
using namespace std;

 class Hero {
    private:
    int health;
    char level;
    public:
    void print(){
        cout<<level<<endl;
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

 };

int main() {
    
    Hero sushant;
    sushant.setHealth(100); // without using this garrabge value mile gi
    cout<<"Sushant:"<<sushant.getHealth()<<endl;
    

    return 0;
}
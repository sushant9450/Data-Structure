#include <bits/stdc++.h>
using namespace std;
class Student{
    string name ;
    float cgpa;

    public:
    void getPercentage(){
        cout<<(cgpa*10)<<"%\n";
    }
    
    //SETTERS
    void setName(string nameVal){
        name= nameVal;
    }
    void setCgpa(float cgpaVal){
        cgpa=cgpaVal;
    }
    
    //GETTERS
    string getName(){
        return name ;
    }
    float getCgpa(){
        return cgpa;
    }
   };

int main() {
   Student s1; //object creation
   s1.setName("Sushant");
   s1.setCgpa(9.1);
  
   cout<<s1.getName()<<endl;    
  cout<<s1.getCgpa()<<endl;    

    return 0;
}
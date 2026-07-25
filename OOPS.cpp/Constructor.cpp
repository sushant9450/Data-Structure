// #include <bits/stdc++.h>
// using namespace std;

// class Car{
//     string name;
//     string color;

//      public:
//        Car(string namevalue,string colorvalue){
//          cout<<"constructor is called. object being created..\n";
//          name=namevalue;
//             color=colorvalue;
// }

//   void start(){
//     cout<<"car is started..\n";
//   }

//   void stop(){
//     cout<<"car is stopped..\n";
//   }
//        //Getters
//      string getName(){
//         return name;
//      }
//        string getColor(){
//         return color;
//      }

//     };

// int main() {
//      Car c1("maruti 800","red");
     
//      cout<<"car name:"<<c1.getName()<<endl;
//      cout<<"car color:"<<c1.getColor()<<endl;
//     return 0;
// }



// CONSTRUCTOR OVERLOADING

// #include <bits/stdc++.h>
// using namespace std;

// class Car{
//     string name;
//     string color;

//      public:
//      Car(){  //no parameter given
//       cout<<"Constructor without parameter..\n";
//      }
//        Car(string name,string color){
//          cout<<"constructor with parameter..\n";
//          this->name=name;   // left wala object ki id hoti hai or right wala parameter hota hai as an argument pass hua tha
//           this->color=color;  // this ka use hm basicaly tb use karte hai hamri properties and parameters ke same name hote hai
// }
//   void start(){
//     cout<<"car is started..\n";
//   }
//   void stop(){
//     cout<<"car is stopped..\n";
//   }
//        //Getters
//      string getName(){
//         return name;
//      }
//        string getColor(){
//         return color;
//      }
//     };
// int main() {
//      Car c1("maruti 800","red");
//      Car c0;  //non parameter
//      Car c2("Fortuner","white"); 
//     //  cout<<"car name:"<<c1.getName()<<endl;
//     //  cout<<"car color:"<<c1.getColor()<<endl;
//     return 0;
// }



//Question


#include <bits/stdc++.h>
using namespace std;
 
class User{
private:
    int id;
    string password;

public:
    string username;
     User(int id){
      this->id=id;
    }
    //GETTERS
    string getPassword(){
      return password;
    }
    void setPassword(string password){
      this->password=password;
    }
};
int main() {
  User user1(1010);
  user1.username="SUSHANT";
  user1.setPassword("acdjsh");
    
     cout<<"user name:"<<user1.username<<endl;
     cout<<"password:"<<user1.getPassword()<<endl;
    return 0;
}




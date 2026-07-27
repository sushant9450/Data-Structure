// #include <bits/stdc++.h>
// using namespace std;
// struct Student // can use class in place of struct
// {
//     string name;
//     int age;
//     float marks;
// };
// int main() {
//     Student s1;
//     s1.name="Sushant";
//     s1.age=19;
//     s1.marks=20,5;
//     cout<<"Name= "<<s1.name<<endl<<"Age ="<<s1.age<<endl<<"marks ="<<s1.marks<<endl;
    

//     return 0;
// }



//CONSTRUCTOR
// #include <bits/stdc++.h>
// using namespace std;

// class Student{
//     public:
//     string name;
//     int age;
//     float marks;
//     Student(string n,int a,int m){   //parameterised constructor, agr hm construct na bhi de to bhi constructor call hota hai or usme garbage value milti hai
//          name=n;
//          age=a;
//          marks=m;
//     }
// };

// int main(){
//     Student s1("Sushant",19,20.5); //Constructor called
//     Student s2("Ashish",20,15);
//     // cout<<Student.s1()<<endl;
//     // cout<<s2()<<endl;

//      cout<<"Name= "<<s1.name<<endl<<"Age ="<<s1.age<<endl<<"marks ="<<s1.marks<<endl;
//       cout<<"Name= "<<s2.name<<endl<<"Age ="<<s2.age<<endl<<"marks ="<<s2.marks<<endl;
// return 0;
// }



#include <bits/stdc++.h>
using namespace std;

struct Student{
    
    string name;
    int age;
    float marks;
    
    
};

int main(){
    Student s1; 
    Student s2;
     cout<<"Name= "<<s1.name<<endl<<"Age ="<<s1.age<<endl<<"marks ="<<s1.marks<<endl;
      cout<<"Name= "<<s2.name<<endl<<"Age ="<<s2.age<<endl<<"marks ="<<s2.marks<<endl;
return 0;
}


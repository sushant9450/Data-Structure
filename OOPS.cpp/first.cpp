// #include <bits/stdc++.h>
// using namespace std;
// class Student{   //always start with capital letter

//     //Properties
//     string name;
//     float cgpa;

//     //Methods
//     void getPercentage(){
//         cout<<(cgpa*10)<<"%\n";
//     }
// };


// int main() {
//     Student s1; //Objects creation   like(int x,int y)
//     cout<<sizeof(s1)<<endl;
//     return 0;
// }





//  Access Modifier

#include <bits/stdc++.h>
using namespace std;
class Student{         //as like int, float, double
    //Properties
    public:      // if we use private here only for string name than than in main finction some error in s1.name section
    string name;
    float cgpa;
    //Methods
    void getPercentage(){    // ye class ka unction hai
        cout<<(cgpa*10)<<"%\n";
    }
};
int main() {
    Student s1; //Objects creation
    s1.name="Sushant";        //🏠 Ghar ka map = blueprint/class

                              //  🏠 Bana hua ghar = object

                                //   Yaha:

                               // 🎓 Student = blueprint

                                // 🎓 s1 = real student
    s1.cgpa=9.0;
    cout<<s1.name<<endl;
    cout<<s1.cgpa<<endl;
    cout<<sizeof(s1)<<endl;
    s1.getPercentage();
    return 0;
}
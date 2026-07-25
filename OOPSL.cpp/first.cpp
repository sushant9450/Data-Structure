// #include <bits/stdc++.h>
// using namespace std;
 
// class Hero{

//     //Properties
//     int Health;
// };

// int main() {
  
//     Hero h1; //creation of object
//     cout<<"size:"<<sizeof(h1)<<endl;// ek integer 4 byte ka hota hai utna hi outpuat hoga
    

//     return 0;
// }


//EMPTY CLASS CASE
// #include <bits/stdc++.h>
// using namespace std;
 
// class Hero{

//     //Properties
//     //int Health; empty class ke case me app ke object ko 1 byte of memory allocate ho jati hai
// };

// int main() {
  
//     Hero h1;//creation of object
//     cout<<"size:"<<sizeof(h1)<<endl;// 

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;


class Hero{
    //properties
    public:
    int health;
    char level;

    // private:  //ki koi bhi private data ko hm shirf class ke andar access kr sakte hai
    // char level;
    // void print(){
    //     cout<<level<<endl;
    // }
    
};

main(){

    Hero sushant;
    
    sushant.health=100; //agar ye dono line na like to bhi code chale ga lekin us time garbage value hame mile gi
    sushant.level='A';

    
    cout<<"health:"<<sushant.health<<endl;  // agar hm uper public nhi likte to .helath and.level me error dikata kyu ki koi bhi private data ko hm shirf class ke andar access kr sakte hai
    cout<<"level:"<<sushant.level<<endl;
}
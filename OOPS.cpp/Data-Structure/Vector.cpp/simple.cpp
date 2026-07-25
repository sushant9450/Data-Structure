#include<bits/stdc++.h>
using namespace std;
int main(){
  int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Array Element:";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    vector<int>list;
    list.push_back(10);
    list.push_back(20);
    list.push_back(30);
    cout<<"Vector Element:";
    for(int i=0;i<list.size();i++)
    cout<<list[i]<<" ";
    return 0;
}
//    // INSERT FUNCTION
// /*vector<char> v={'a','f','d'};
// v.push_back('z');
// v.insert(v.begin()+1,'c');   // insert function vector me particular place pe hota ha
// for(int i=0;i<v.size();i++)
// cout<<v[i]<<" ";
// return 0;
// }*/

// /*vector<int> v={10,20,30,40};
// v.push_back(100);
// v.insert(v.begin()+3,35);
// for(int i=0;i<v.size();i++)
// cout<<v[i]<<" ";
// return 0;
// }*/



// /*vector<int> v={10,20,30,40};
// v.push_back(100);
// v.insert(v.end() -3,35);
// for(int i=0;i<v.size();i++)
// cout<<v[i]<<" ";
// return 0;
// }*/



// /*vector<int> v={10,20,30,40};
// cout<<"Element at index 2 using []:"<<v[2]<<endl;
// cout<<"Element at index 3 using []:"<<v.at(3)<<endl;
// return 0;
// }*/


// //UPDATE ELEMENT
// /*vector<int> v={10,20,30};
// cout<<"orginal value at index 1:"<<v[1]<<endl;
// v[1]=50;
// for(int i:v)   //for each loop i is placed at int i & v name of vector
// cout<<i<<" ";   // i ko print karana ha jisko run kara rha hao usko print karna hai
// return 0;
// }*/


// //SIZE
// /*vector<char> v={'a','c','d','f','z'};
//  v.push_back(30);
//  v.push_back(65);
//  v.push_back(95);
// cout<<v.size()<<endl;
// for(char i:v)       //for(char i:v)  8 a c d f z
// cout<<i<<" ";   // 897 whre 97 assic value and 8 is size 
// return 0;
// }*/


// //DELETE ELEMENT

// /*vector<char> v= {'a','c','d','f','z'};
// v.pop_back();
// v.erase(find(v.begin(),v.end(),'f'));  // use to find particular value than erase it  
// for(int i=0;i<v.size();i++)
//     cout<<v[i]<<" ";
//     return 0;
// }*/

//   /*vector<int> v={10,20,30,40,50};
//    int num;
//    cin>>num;
//    if(find(v.begin(),v.end(),num) != v.end())
//    cout<<"elemnt found";
//    else
//    cout<<"not found";
//    return 0;
// }*/
  
// //SORTING 
// /*vector<int>list={55,45,67,14,26};
// sort(list.begin(),list.end());
// cout<<"Sorted vector:";
// for(int num :list)     //num se chalana hai list tk jana hai
// cout<<num<<" ";
// return 0;
// }*/


// /*vector<int>v(10);
// for(int i=0;i<v.size();i++)
// {
//    cin>>v[i];
// }
// sort(v.begin(),v.end());
// cout<<"Sorted vector:";
// for(int num :v)     //num se chalana hai list tk jana hai
// cout<<num<<" ";
// return 0;
// }*/

// //LINEAR SEARCH

// /*vector<int>vec={2,4,5,5,8,10};
// int key =6;
// bool found =(find(vec.begin(),vec.end(),key) !=vec.end());
// cout<<"Found(linear)"*/




// //ALTERNATE ARRAY
// /*int n;
// cin>>n;
// vector<int>v(n);
//  for(int i=0;i<v.size();i++)
//  cin>>v[i];
//   for(int i=0;i<v.size();i++)
//   {
//    if(i%2==0)
//    cout<<v[i]<<" ";
//   }
//  return 0;
// }*/



// //FIND THE SECOND LARGEST ELEMENT IN THE ARRAY
// /*int n;
// cin>>n;
// vector<int>v(n);
//  for(int i=0;i<v.size();i++)
//  cin>>v[i];
// sort(v.begin(),v.end());
// int secondlargest=v[n-2];
// int largest=-1;
// for(int i=n-1;i<v)

//   if(int secondlargest=v[n-2])
//   {
//  cout<<"Second larget element:"<<secondlargest;
//   }
 
//  return 0;
// }*/

// //count the zeros
// /*int n;
// cin>>n;
// vector<int>v(n);
// for(int i=0;i<v.size();i++)
// cin>>v[i];
// int idx = 0;
// for (int i = 0; i < v.size(); i++) {
// if (v[i] == 0) {
//  idx++;
//  }
//  }
//  cout << idx;
//  return 0;
// }*/



// //TO CHECK ARRAY IS SORTED

// int n;
// cin>>n;
// vector<int>v(n);
// for(int i=0;i<v.size();i++)
// cin>>v[i];
// bool sorted=true;
// for(int i=0;i<n-1;i++)
// {

// }
// }








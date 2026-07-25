#include<bits/stdc++.h>
using namespace std;
/*int main(){
    char arr[5]={'s','i','n','g','\0'};
     cout<<arr<<endl;
     cout<<strlen(arr);
     "Sushant singh";//lietrals
     "Priyanshu singh";//"
     return 0;
}*/
  //Taking input so with all wor with space 
int main(){
    char sentence[30];   // * iska use as a terminator hota hai input me isko dene ke bad iski bad wali value print nhi hogi
    cin.getline(sentence,30,'*');  //agar hm getline nhi kr ge to space ke bad wali input value print nhi hogi or uski length bhi untni word ki show hogi
    cout<<"your word is:"<<sentence<<endl;
    cout<<"length:"<<strlen(sentence)<<endl;
    return 0;
}
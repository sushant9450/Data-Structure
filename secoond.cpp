#include <bits/stdc++.h>
using namespace std;
class Stack
{
    vector<int>item;
    int Top;

    public:
    //CONSTRUCTOR
    Stack(int s){
        item.resize(s);
        Top=-1;
    }

/***********************/
    void Push(int x){
if(Top==item.size()-1){
    cout<<"Stack overflow"<<endl;
}else{
        Top++;
        item[Top]=x;
     }
    }


/************************/
     int Pop(){
    if(Top==-1){
    cout<<"Stack undeflow"<<endl;
    }else{
     int x=item[Top];
    Top--;
     return x;
    }
        }
     

/**************************/
   int StackTop(){
    int x=item[Top];
    return x;
   }


/*************************/
     bool IsEmpty(){
     if(Top==-1){
        return true;
     }else{
        return false;
     }
    }


void DecimalToBinary(int N) {

    while (N != 0) {
        int bin = N % 2;
        Push(bin);
        N = N / 2;
    }

    cout << "Binary Number: ";

    while (!IsEmpty()) {
        cout << Pop();
    }

    cout << endl;
}

void DecimalToOctal(int M) {

    while (M != 0) {
        int bin = M % 8;
        Push(bin);
        M = M/ 8;
    }

    cout << "Octal Number: ";

    while (!IsEmpty()) {
        cout << Pop();
    }

    cout << endl;
}

void DecimalToHexadecimal(int Q){
    while(Q!=0){
        int bin=Q%16;
        Push(bin);
        Q=Q/16;

    }
}

};


int main() {
    Stack stk(20);
    // stk.Push(1);
    // stk.Push(2);
    // stk.Push(3);
    // stk.Push(5);
    // stk.Push(6);
    // cout << "Top Element: " << stk.StackTop() << endl;
    // stk.Pop();
    // cout << "Top Element: " << stk.StackTop() << endl;
 
    // int N;
    // cout << "Enter Decimal Number: ";
    // cin >> N;

    // while (N!=0) {
    //     int bin = N % 2;
    //     stk.Push(bin);
    //     N = N / 2;
    // }
    // cout << "Binary Number: ";
    // while (!stk.IsEmpty()) {
    //     cout << stk.Pop();
    // }
    // cout << endl;
    int N;
    cout<<"N: ";
    cin>>N;
    stk.DecimalToBinary(N);
    cout<<endl;

     int M;
    cout<<"M: ";
    cin>>M;
    stk.DecimalToOctal(M);
    cout<<endl;



    /**************************OCTAL*/
    // int M;
    // cout << "Enter Decimal Number: ";
    // cin >> M;

    // while (M!=0) {
    //     int bin = M % 8;
    //     stk.Push(bin);
    //     M = M / 8;
    // }
    // cout << "Octal Number: ";
    // while (!stk.IsEmpty()) {
    //     cout << stk.Pop();
    // }
    // cout << endl;

    return 0;
}
    
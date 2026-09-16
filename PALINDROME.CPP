#include<bits/stdc++.h>
using namespace std;

class Stack{
public:
     public:
    vector<char> item;
    int top;
    Stack(int M)
{
    //item=vector<char>(M);
    item.resize(M);
    top=-1;
}
    void Push(char x){
        if(top == item.size()-1){
            cout << "Stack Overflow\n";
            return;
        }
        top++;
        item [top]=x;
    }

    char Pop(){
        if(top == -1){
            cout << "Stack Underflow\n";
            return '\0';
        }
        return item[top--];
    }

    bool IsEmpty(){
        return top == -1;
    }
};

bool isPalindrome(string str){
    Stack S(str.length());

    // sare character ko hm stack me dal rha hai
    for(int i = 0; i < str.length(); i++){
        S.Push(str[i]);
    }

    // Compare kr rhaa hai pop krke
    for(int i = 0; i < str.length(); i++){
        if(str[i] != S.Pop()){
            return false;
        }
    }

    return true;
}

int main(){
    string str;

    cout << "Enter String: ";
    cin >> str;

    if(isPalindrome(str))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
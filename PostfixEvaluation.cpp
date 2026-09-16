#include <bits/stdc++.h>
using namespace std;

class Stack
{
    vector<int> item;
    int Top;

public:
    //CONSTRUCTOR
    Stack(int s){
        item.resize(s);
        Top = -1;
    }

    /***********************/
    void Push(int x){
        if (Top == item.size() - 1){
            cout << "Stack Overflow" << endl;
        }else{
             Top++;
             item[Top] = x;
        }
    }

    /************************/
    int Pop(){
        if (Top == -1){
            cout << "Stack Underflow" << endl;
            return -1;
        }else{
            int x = item[Top];
            Top--;
            return x;
        }
    }

    /**************************/
    int StackTop(){
        if (Top == -1){
            cout << "Stack is Empty" << endl;
            return -1;
        }
        int x = item[Top];
        return x;
    }

    /*************************/
    bool IsEmpty(){
        if (Top == -1) {
            return true;
        }else{
            return false;
        }
    }
};

int Evaluate(int a, int b, char symbol)
{
    switch (symbol)
    {
    case '+': return a + b;
    case '-': return a - b;
    case '*': return a * b;
    case '/': return a / b;
    case '%': return a % b;
    case '^': return (int)pow(a, b);
    default:
        cout << "Invalid Operator" << endl;
        return -1;
    }
}
int main()
{
    Stack stk(20);
    string postfix;
    cout << "Enter Postfix Expression: ";
    cin >> postfix;
    int i = 0;
    while (i < postfix.length())
    {
        char symbol = postfix[i];

        if (symbol >= '0' && symbol <= '9')
        {
            stk.Push(symbol - '0');
        }
        else
        {
            int b = stk.Pop();
            int a = stk.Pop();  
            int val = Evaluate(a, b, symbol);
            stk.Push(val);
        }
        i++;
    }
    cout << "Result = " << stk.StackTop() << endl;
    return 0;
}
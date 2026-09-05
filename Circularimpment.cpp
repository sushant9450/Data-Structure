#include <bits/stdc++.h>
using namespace std;

class Queue {
    int* arr;

    int capacity;    // maximum kitne elements aa sakte hain
    int currSize;    // currently kitne elements hain

    int f, r;

public:

    Queue(int capacity) {
        this->capacity = capacity;
        arr = new int[capacity];

        currSize = 0;

        f = 0;
        r = -1;
    }

    void push(int data) {

      
        if (currSize == capacity) {
            cout << "Queue is full" << endl;
            return;
        }

        r = (r + 1) % capacity;
        arr[r] = data;

        // Ek element add hua
        currSize++;
    }

    void pop() {

        // EMPTY check
        if (currSize == 0) {
            cout << "Queue is empty" << endl;
            return;
        }

        f = (f + 1) % capacity;

        // Ek element remove hua
        currSize--;
    }

    int front() {

        if (currSize == 0) {
            cout << "Queue is empty" << endl;
            return -1;
        }

        return arr[f];
    }

    bool empty() {
        return currSize == 0;
    }

    void printRear() {
        cout << arr[r] << endl;
    }
};

int main() {

    Queue Q(4);

    Q.push(1);
    Q.push(2);
    Q.push(3);
    Q.push(4);

    Q.push(5);

    cout << Q.front() << endl;

    Q.pop();

    cout << Q.front() << endl;

    Q.push(5);

    cout << Q.front() << endl;

    Q.printRear();

    return 0;
}
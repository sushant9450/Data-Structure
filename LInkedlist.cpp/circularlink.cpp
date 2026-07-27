#include <bits/stdc++.h>
using namespace std;


class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};


class CircularList {
public:
    Node* head; //pointing first node
    Node* tail;  //pointing last node

    CircularList() {
        head = NULL;
        tail = NULL;
    }

    
    void insert(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
           
            head = tail = newNode;
            tail->next = head;   //last wala starting wale head ko point kare ga(circular hai na) 
        } else {
            tail->next = newNode; 
            tail = newNode;       
            tail->next = head;    
        }
    }

    
    void printList() {
        if (head == NULL) {
            cout << "List is empty\n";
            return;
        }

        Node* temp = head;

        do {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != head);  
        cout <<head<< "(back to head)\n";
    }
};

int main() {
    CircularList cl;

    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter values:\n";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cl.insert(x);
    }

    cout << "Circular Linked List:\n";
    cl.printList();
       
    return 0;
}
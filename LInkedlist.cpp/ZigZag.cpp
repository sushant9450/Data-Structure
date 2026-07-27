#include <bits/stdc++.h> 
using namespace std; 

struct Node{ 
    int data; 
    Node* next; 
    Node(int val){ 
        data = val; 
        next = NULL; 
    } 
}; 

class List{ 
public: 
    Node* head; 
    Node* tail; 

    List(){ 
        head = NULL; 
        tail = NULL; 
    } 

    void printList(Node* head){ 
        while(head != NULL){ 
            cout << head->data << " -> "; 
            head = head->next; 
        } 
        cout << "NULL\n"; 
    } 

    void push_front(int val){ 
        Node* newNode = new Node(val); 
        if(head == NULL){ 
            head = tail = newNode; 
        }else{ 
            newNode->next = head; 
            head = newNode; 
        } 
    } 

    void push_back(int val){ 
        Node* newNode = new Node(val); 
        if(head == NULL){ 
            head = tail = newNode; 
        }else{ 
            tail->next = newNode; 
            tail = newNode; 
        } 
    } 

    Node* splitAtMid(Node* head){ 
        Node* prev = NULL; 
        Node* slow = head; 
        Node* fast = head; 

        while(fast != NULL && fast->next != NULL){ 
            prev = slow;          
            slow = slow->next;    
            fast = fast->next->next; 
        } 
        if(prev != NULL){ 
            prev->next = NULL;    
        } 
        return slow; 
    } 

    Node* reverse(Node* head){ 
        Node* prev = NULL; 
        Node* curr = head; 
        Node* next = NULL; 
        while(curr != NULL){ 
            next = curr->next; 
            curr->next = prev; 
            prev = curr; 
            curr = next; 
        } 
        return prev; 
    } 

    Node* ZigZag(Node* head){ 
        if (head == NULL || head->next == NULL) return head;

        Node* righthead = splitAtMid(head); 
        Node* rightHeadRev = reverse(righthead); 
        
        //alternative merging: 1st head=head, 2nd head=rightHeadRev 
        Node* left = head; 
        Node* right = rightHeadRev; 
        Node* tail = right; 
        
        while(left != NULL && right != NULL){ 
            Node* nextLeft = left->next; 
            Node* nextRight = right->next; 
            
            left->next = right; 
            right->next = nextLeft; 
            tail = right; // agr odd number ki list hai to rigt wale list me jo last value bache gi uskon store karne ke leye 
            
            left = nextLeft; 
            right = nextRight; 
        } 
        if(right != NULL){ 
            tail->next = right; 
        } 
        return head; 
    } 
};

int main() { 
    List ll; 
    ll.push_front(1); 
    ll.push_front(2); 
    ll.push_front(3); 
    ll.push_front(4);
    ll.push_front(5);


    cout << "Original List: ";
    ll.printList(ll.head); 

    ll.head = ll.ZigZag(ll.head); 

    cout << "ZigZag List:   ";
    ll.printList(ll.head); 
    return 0; 
}

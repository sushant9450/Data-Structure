#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};

/***********/
node *GetNode()
{
    node *p;
    p = new node;
    return p;
}

/*************/
node *Enqueue(node *PQ, int x)
{
    node *curr, *prev;

    curr = PQ;
    prev = NULL;


    node *R;
    R = GetNode();

    // Naye node mein value store karo
    R->data = x;

    // Naye node ka next initially NULL
    R->next = NULL;

    while (curr != NULL && x >= curr->data)
    {
        prev = curr;
        curr = curr->next;
    }

    // Agar beginning mein insert karna hai
    if (prev == NULL)
    {
        R->next = PQ;
        PQ = R;
    }
    else
    {
        // Beech ya end mein insert karo
        prev->next = R;
        R->next = curr;
    }
    return PQ;
}
/*************/
node *DeQueue(node *PQ)
{
 
    if (PQ == NULL)
    {
        cout << "Queue Underflow"<<endl;
        exit(1);
    }

    node *p;
    p = PQ;
    int x = p->data;
    PQ = PQ->next;

    // Purana first node delete karo
    delete (p);

    // Updated PQ return karo
    return PQ;
}


int main()
{
 
    node *PQ;
    PQ = NULL;

    PQ = Enqueue(PQ, 1);
    PQ = Enqueue(PQ, 1);
    PQ = Enqueue(PQ, 2);
    PQ = Enqueue(PQ, 5);
    PQ = Enqueue(PQ, 10); // ye abse last me aye ga kyuki priority  Queue hai to jo chota hoga wo phele aye ga
    PQ = Enqueue(PQ, 6);
    PQ= Enqueue(PQ, 0);
    // PQ = Enqueue(PQ, 7);
    // PQ = Enqueue(PQ, 8);
    // PQ = Enqueue(PQ, 9);
    // PQ = Enqueue(PQ, 10);
    node *p = PQ;

    while (p != NULL)
    {
        cout << p->data << " ,";
        p = p->next;
    }

    cout << endl;

    // DeQueue
    PQ = DeQueue(PQ);
    PQ = DeQueue(PQ);
    PQ = DeQueue(PQ);
    PQ = DeQueue(PQ);
    PQ = DeQueue(PQ);
    PQ = DeQueue(PQ);
    PQ = DeQueue(PQ);
    PQ = DeQueue(PQ);
    PQ = DeQueue(PQ);
     
      p = PQ;

   cout << "After DeQueue: ";

while (p != NULL)
{
    cout << p->data << " ,";
    p = p->next;
}
    return 0;
}
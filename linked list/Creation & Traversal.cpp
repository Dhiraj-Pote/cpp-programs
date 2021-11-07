#include<iostream>
using namespace std;
// Creatn. of Node

class Node
{   public:
    int data;
    Node *next ;
};

// print all the nodes
void displayall(Node *ptr)
{
    while (ptr != NULL)
    {
        cout<<"Element: "<< ptr->data <<endl;   // int i=4; int *p = &i; cout<<*p;
        ptr = ptr->next;
    }
}


//Functn. for insertion 
Node* insertatfirst(Node* head , int data){
Node* ptr = new Node;
ptr->next = head;
ptr->data = data;
return ptr;
}

int main()
{ // Allocate memory for nodes in the linked list in Heap
    Node* head = new Node;
    Node* second = new Node;
    Node* third = new Node;
    Node* fourth = new Node;

    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 11;
    second->next = third;

    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 69;
    fourth->next = NULL;

    displayall(head);
    head = insertatfirst(head,28);
    displayall(head);

    return 0;
}
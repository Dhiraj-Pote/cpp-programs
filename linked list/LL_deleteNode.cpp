#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

Node* traversal(Node *head){

Node *ptr = head;
while( ptr!=NULL ){
cout<<"Elements :"<<ptr->data<<endl;
ptr=ptr->next;

}

}
 
Node* deletefirst(Node *head){
    Node *ptr = head;
    head = head->next;      //second node becomes head now
    free(ptr);
    return head;
}
int main(){

Node *head = new Node;
Node *second = new Node;
Node *third = new Node;
Node *fourth = new Node;

head->data = 2;
head->next = second;

second->data = 4;
second->next = third;

third->data = 6;
third->next = fourth;

fourth->data = 8;
fourth->next = NULL;

cout<<"before delete \n";
traversal(head);

cout<<"\nafter delete  \n";
head = deletefirst(head);
head = deletefirst(head);
head = deletefirst(head);
traversal(head);

return 0;

}


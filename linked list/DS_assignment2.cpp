/* Create a singly linked list with options: a. Create b. Insert  c. Display  */

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = new Node;
Node *second = new Node;
Node *third = new Node;
Node *fourth = new Node;

void display(Node *ptr)
{
    int i = 1;
    while (ptr != NULL)
    {
        cout << "Node " << i << ": " << ptr->data << endl;
        ptr = ptr->next;
        i++;
    }
}

Node *insert(Node *head, int data)
{
    Node *ptr = new Node;
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

void create()
{
    int a, b, c, d;

    cout << "Enter Node data: \n";
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    // Link first and second nodes
    head->data = a;
    head->next = second;

    // Link second and third nodes
    second->data = b;
    second->next = third;

    // Link third and fourth nodes
    third->data = c;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = d;
    fourth->next = NULL;
}

int main()
{
    int ch;

    cout << "\n1) Create " << endl;
    cout << "2) Display " << endl;
    cout << "3) Insert" << endl;
    cout << "4) Exit" << endl;
    do
    {
        cout << "\nEnter choice: " << endl;
        cin >> ch;
        cout << "\n";
        switch (ch)
        {
        case 1:
        {
            create();
            break;
        }
        case 2:
        {
            display(head);
            break;
        }
        case 3:
        {
            int a;
            cout << "Enter data: ";
            cin >> a;
            head = insert(head, a);
            cout << "After insertion: \n";
            display(head);
            break;
        }
        case 4:
        {
            break;
        }
        default:
        {
            cout << "Invalid Choice" << endl;
        }
        }
    } while (ch != 4);

    return 0;
}
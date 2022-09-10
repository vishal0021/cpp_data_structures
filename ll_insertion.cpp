#include<iostream>

using namespace std;
//node is a built in datatype
//that is why we need to create Node named pointer

class Node
{
    public:
    int value;
    Node* Next;  //pointer for the next node
};
void printList(Node*n)
{
    while(n!=NULL)
    {
        cout<<n->value<<endl;
        n = n->Next;
    }
}

void insertAtFront(Node**head, int newValue)
{
    //prepare a new node
    //put it in front of current head
    //move head of the ll to point new node
    Node* newNode = new Node();
    newNode->value = newValue;

    newNode->Next = *head;
    *head = newNode;

}

void insertAtEnd(Node**head, int newValue)
{
    //prepare a new node
    Node* newNode = new Node();
    newNode->value = newValue;
    newNode->Next = NULL;

   //if linked List is empty add the node to the head
    if(*head ==NULL)
    {
        *head = newNode;
        return;
    }

     //find the last node
     Node* last = *head;
     while(last->Next !=NULL)
     {
         last = last->Next;
     }
    //insert new Node after last node
    last->Next = newNode;

}

int main()
{
    cout<<"linked_list"<<endl;
    Node* head = new Node();   //head object

    Node* second = new Node();
    Node* third = new Node();
    int num = -1;

    head->value = 1;
    head->Next = second;
    second->value = 2;
    second->Next = third;
    third->value = 3;
    third->Next = NULL;
    
    printList(head);
    insertAtFront(&head,num);
    insertAtFront(&head,num);
    cout<<"after adding new node"<<endl;
    insertAtEnd(&head,345);
    printList(head);

    return 0;
}
#include<iostream>

using namespace std;

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

int main()
{
    cout<<"linked_list"<<endl;
    Node* head = new Node();   //head object

    Node* second = new Node();
    Node* third = new Node();

    head->value = 1;
    head->Next = second;
    second->value = 2;
    second->Next = third;
    third->value = 3;
    third->Next = NULL;
    
    printList(head);


    return 0;
}
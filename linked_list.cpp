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

void findvalue(Node*n, int x)
{
   while(n!=NULL)
   {
       if (n->value == x)
       {
           cout<<"found the element at: "<<n<<endl;
           cout<<"element value is: "<<n->value<<endl;
       }
       n = n->Next;
   }

}

int main()
{
    cout<<"linked_list"<<endl;
    Node* head = new Node();   //head object

    Node* second = new Node();
    Node* third = new Node();
    cout<<"head address: "<<head<<endl;
    cout<<"second address: "<<second<<endl;
    cout<<"third address: "<<third<<endl;


    head->value = 1;
    head->Next = second;
    second->value = 2;
    second->Next = third;
    third->value = 3;
    third->Next = NULL;
    
    printList(head);
    findvalue(head,2);


    return 0;
}
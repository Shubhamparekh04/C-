
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};

int main()
{

    Node *HEAD = new Node();
    HEAD->data = 10;
    HEAD->next = NULL;

    Node *current = new Node();
    current->data = 98;
    current->next = NULL;
    HEAD->next = current;

    current = new Node();
    current->data = 55;
    current->next = NULL;
    HEAD->next->next = current;

    current = new Node();
    current->data = 66;
    current->next = NULL;
    HEAD->next->next->next = current;

    Node *ptr = HEAD;

    while (ptr != NULL)
    {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }

    // cout<<"HEAD : "<<HEAD->data<<" Address : "<<HEAD->next<<endl;
    // cout<<"n2 : "<<HEAD->next->data<<" Address : "<<HEAD->next->next<<endl;
    // cout<<"n3 : "<<HEAD->next->next->data<<" Address : "<<HEAD->next->next->next<<endl;
    // cout<<"n4 : "<<HEAD->next->next->next->data<<" Address : "<<HEAD->next->next->next->next<<endl;

    return 0;
}
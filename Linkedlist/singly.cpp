/*
Creaing a first Node:

Step-1:
Node *HEAD = NULL;
//or
Node *HEAD = nullptr;

Step-2:
HEAD = new Node();

*/

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
    HEAD->data = 25;
    HEAD->next = NULL;

    Node *n2 = new Node();
    n2->data = 98;
    n2->next = NULL;
    HEAD->next = n2;

    Node *n3 = new Node();
    n3->data = 75;
    n3->next = NULL;
    n2->next = n3;

    cout << "Head :" << HEAD->data << ", Adress : " << HEAD->next << endl;
    cout << "n2 :" << n2->data << ", Adress : " << n2->next << endl;
    cout << "n3 :" << n3->data << ", Adress : " << n3->next << endl;

    return 0;
}
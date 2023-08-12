#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void printList(Node *first)
{
    Node *temp = first;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

void printNeighbours(Node *start, int index)
{
    Node *temp = start;

    if (index == 0)
    {
        cout << temp->next->data << endl;
    }

    if (index > 0)
    {
        for (int i = 1; i <= index; i++)
        {

            if (i == index)
            {
                cout << temp->next->data << endl;
            }
            temp = temp->next;
        }
    }
}

int main()
{
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();

    head->data = 12;
    second->data = 45;
    third->data = 67;

    head->next = second;
    second->next = third;
    third->next = NULL;

    printList(head);
    printNeighbours(head, 0);

    return 0;
}
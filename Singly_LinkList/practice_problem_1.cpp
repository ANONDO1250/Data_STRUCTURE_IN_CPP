#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;

    Node(int val) // constructor
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, int v)
{

    Node *newNode = new Node(v);

    if (head == NULL)
    {
        head = newNode;

        return;
    }

    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
void print_linkList(Node *head)
{

    cout << endl;
    cout << "This is Your LinkLIst: ";

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}
int main()
{
    int val;
    Node *head = NULL;
    int count = 0;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        else
        {
            insert_at_tail(head, val);
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
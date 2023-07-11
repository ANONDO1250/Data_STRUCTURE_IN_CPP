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

    Node *newnode = new Node(v);
    if (head == NULL)
    {
        head = newnode;
        return;
    }

    Node *tmp = head;

    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    // tmp ekhn last node e
    tmp->next = newnode;
};

void print_linked_list(Node *head)
{
    cout << "Your LinkList:" << endl;
    Node *tmpp = head;
    while (tmpp != NULL)
    {
        cout << tmpp->val << " ";
        tmpp = tmpp->next;
    }
}

int main()

{

    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert a tail" << endl;
        cout << "Option 2: print link list" << endl;
        cout << "Option 3: Terminate" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Enter a value" << endl;
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        if (op == 2)
        {
            print_linked_list(head);
            cout << " " << endl;
        }
        else if (op == 3)
        {
            break;
        }
    }

    print_linked_list(head);
    return 0;
}
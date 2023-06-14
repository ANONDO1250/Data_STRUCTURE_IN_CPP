#include <bits/stdc++.h>
using namespace std;
class Node
{

public:
    int val;
    Node *next;

    Node(int val)
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
        cout << endl
             << endl
             << "Inserted at Head" << endl
             << endl;
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

void insert_at_position(Node *head, int pos, int v)
{
    Node *newnode = new Node(v);
    Node *temp = head;
    for (int i = 0; i <= pos - 1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            cout << "Invalid Index" << endl;
        }
    }
    newnode->next = temp->next; // eta ami pos er next node er sathe connect korcy
    temp->next = newnode;       // ekhane tmp te j ager next node er number chilo oita bad deye noton node er sathe connect hye gese
}

void insert_at_head(Node *&head, int v)
{
    Node *newnode = new Node(v);
    newnode->next = head;
    head = newnode;
    cout << "Inserted at Head" << endl;
}

void deleted_at_anyposition(Node *head, int pos)

{
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            cout << endl
                 << "Invalid Index to deleted" << endl
                 << endl;
            return;
        }
    }
    if (temp->next == NULL)
    {
        cout << endl
             << "Invalid Index to deleted" << endl
             << endl;
        return;
    }
    Node *deletednodoe = temp->next;
    temp->next = temp->next->next;
    delete deletednodoe;
    cout << "Deleted position" << pos << endl;
}

void deleted_head(Node *&head)
{
    if (head == NULL)
    {

        cout << endl
             << "Invalid Index to deleted" << endl
             << endl;
        return;
    }

    Node *deletedNode = head;
    head = head->next;
    delete deletedNode;

    cout << "Deleted Head" << endl;
}
int main()
{
    Node *head = NULL;

    while (true)
    {
        cout << "Option 1: Insert a tail" << endl;
        cout << "Option 2: print link list" << endl;
        cout << "Option 3: Insert at any position:" << endl;
        cout << "Option 4: Insert Head:" << endl;
        cout << "Option 5: Deleted from positon:" << endl;
        cout << "Option 6: Deleted Head:" << endl;
        cout << "Option 7: Terminate" << endl;
        int op;
        cin >> op;

        if (op == 1)
        {
            cout << "Enter a Value for insert " << endl;
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }

        else if (op == 2)
        {
            print_linkList(head);
            cout << " " << endl;
        }

        else if (op == 3)
        {
            int pos, v;
            cout << "Enter Position :";
            cin >> pos;
            cout << "Enter a value :";
            cin >> v;
            if (pos == 0)
            {
                insert_at_head(head, v);
            }
            else
            {
                insert_at_position(head, pos, v);
            }
        }

        else if (op == 4)
        {
            int v;
            cout << "Enter Value:";
            cin >> v;
            insert_at_head(head, v);
        }

        else if (op == 5)
        {
            int pos;
            cout << "Enter Position:";
            cin >> pos;
            if (pos == 0)
            {
                deleted_head(head);
            }
            else
            {
                deleted_at_anyposition(head, pos);
            }
        }
        else if (op == 6)
        {
            deleted_head(head);
        }
        else if (op == 7)
        {
            break;
        }
    }

    return 0;
}
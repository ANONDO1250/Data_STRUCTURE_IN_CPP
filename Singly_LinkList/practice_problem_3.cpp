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

void print_middle_elements(Node *head)
{
    if (head == NULL)
    {
        cout << "Empty index" << endl;
    }
    Node *fast = head;
    Node *slow = head;
    Node *prev = NULL;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        prev = slow;
        slow = slow->next;
    }

    cout << endl
         << "Middle Elements: ";

    if (fast == NULL) // even
    {
        cout << prev->val << " " << slow->val;
    }
    else // odd
    {

        cout << slow->val << endl;
    }

    cout << endl;
}
int main()
{
    int val;
    Node *head = NULL;
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
        }
    }

    print_middle_elements(head);

    return 0;
}
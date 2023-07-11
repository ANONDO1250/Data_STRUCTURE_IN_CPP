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

void insert_at_tail(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void print_linkedList(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
void max_min(Node *head, int &maximum, int &minimum)
{
    Node *temp = head;
    maximum = INT_MIN;
    minimum = INT_MAX;

    while (temp != nullptr)
    {
        maximum = max(maximum, temp->val); // Update max jodi value ta boro hy
        minimum = min(minimum, temp->val); // Update min jodi value ta choto hy
        temp = temp->next;
    }
}
int main()
{
    int val;
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        else
        {
            insert_at_tail(head, tail, val);
        }
    }
    int max, min;
    max_min(head, max, min);
    cout << max << " " << min << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
class Node
{

public:
    int val;
    Node *prev;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insert_at_position(Node *&head, Node *&tail, int pos, int val)
{

    Node *newNode = new Node(val);

    if (pos < 0)
    {
        cout << "Invalid" << endl;
        return;
    }

    if (pos == 0)
    {
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }
    else
    {
        Node *cur = head;
        int curIndex = 0;

        while (cur != NULL && curIndex < pos)
        {
            cur = cur->next;
            curIndex++;
        }

        if (cur == NULL && curIndex != pos)
        {
            cout << "Invalid" << endl;
            return;
        }

        if (cur == NULL)
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        else
        {
            newNode->next = cur;
            newNode->prev = cur->prev;
            cur->prev->next = newNode;
            cur->prev = newNode;
        }
    }

    Node *tmp = head;
    cout << "L -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;

    tmp = tail;
    cout << "R -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

int main()
{
    int q;
    cin >> q;

    Node *head = NULL;
    Node *tail = NULL;

    while (q--)
    {
        int x, v;
        cin >> x >> v;
        insert_at_position(head, tail, x, v);
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_Normal(Node *head)
{

    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_reverse(Node *tail)
{

    Node *tmp = tail;

    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

void insert_at_position(Node *head, int pos, int val)
{

    Node *newNode = new Node(val);
    Node *tmp = head;

    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next; // pos er ager node ta ber korlam
    }

    newNode->next = tmp->next;     // newnode er next e --newnode er porer next node er addresss
    tmp->next = newNode;           // newnode er ager node er next sasthe newnode er  connection
    newNode->next->prev = newNode; // newnode er porer node er previous e new node er address
    newNode->prev = tmp;           // newnode er ager node er address newnode er previous e deye delam
}

void insert_Head(Node *&head, Node *&tail, int val)
{

    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{

    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

int size_(Node *head)
{

    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

int main()
{
    Node *head = new Node(10);
    Node *A = new Node(20);
    Node *B = new Node(30);
    Node *C = new Node(40);
    Node *tail = C;

    // connection

    head->next = A;
    A->prev = head;

    A->next = B;
    B->prev = A;

    B->next = C;
    C->prev = B;

    int pos, val, size;
    cin >> pos >> val;
    if (pos == 0)
    {
        insert_Head(head, tail, val);
    }
    else if (pos == size_(head))
    {
        insert_at_tail(head, tail, val);
    }

    else if (pos >= size_(head))
    {

        cout << "Invalid" << endl;
    }
    else
    {

        insert_at_position(head, 2, 100);
    }

    print_Normal(head);
    print_reverse(tail);

    return 0;
}
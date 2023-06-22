#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string val;
    Node *prev;
    Node *next;
    Node(string val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, string val)
{

    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void print_prev(Node *head, string &visit)
{

    Node *tmp = head;

    while (tmp != NULL)
    {
        if (tmp->val == visit)
        {
            if (tmp->prev != NULL)
            {
                cout << tmp->prev->val << endl;
                visit = tmp->prev->val;
                return;
                break;
            }
            else
            {
                cout << "Not Available" << endl;
                return;
                break;
            }
        }

        tmp = tmp->next;
    }
    cout << "Not Available" << endl;
}
void print_next(Node *head, string &visit)
{

    Node *tmp = head;

    while (tmp != NULL)
    {
        if (tmp->val == visit)
        {
            if (tmp->next != NULL)
            {
                cout << tmp->next->val << endl;
                visit = tmp->next->val;
                return;
                break;
            }
            else
            {
                cout << "Not Available" << endl;
                return;
                break;
            }
        }

        tmp = tmp->next;
    }
    cout << "Not Available" << endl;
}
void search_elements(Node *head, string &visit, string f_o_n)
{

    Node *tmp = head;
    bool flag = false;
    while (tmp != NULL)
    {
        if (tmp->val == f_o_n)
        {
            flag = true;
            visit = f_o_n;
            break;
        }
        tmp = tmp->next;
    }
    if (flag == true)
    {
        cout << visit << endl;
    }
    else
    {
        cout << "Not Available" << endl;
    }
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    string val;
    cin >> val;
    while (val != "end")
    {
        insert_at_tail(head, tail, val);
        cin >> val;
    }
    int q;
    cin >> q;
    string visit;
    while (q--)
    {
        string cheeck;

        cin >> cheeck;
        if (cheeck == "visit")
        {
            string f_o_n;
            cin >> f_o_n;
            search_elements(head, visit, f_o_n);
        }
        else if (cheeck == "prev")
        {
            print_prev(head, visit);
        }
        else if (cheeck == "next")
        {
            print_next(head, visit);
        }
    }

    return 0;
}
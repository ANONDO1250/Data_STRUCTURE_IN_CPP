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
        return;
    }

    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void print_linkedList(Node *head)
{

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void remove_duplicates(Node *&head)
{
    Node *current = head;

    while (current != NULL)
    {
        Node *tmp = current;

        while (tmp->next != NULL)
        {
            if (tmp->next->val == current->val)
            {
                Node *duplicateNode = tmp->next;
                tmp->next = tmp->next->next;
                delete duplicateNode;
            }
            else
            {
                tmp = tmp->next;
            }
        }

        current = current->next;
    }
}

void print_unique_val(Node *head)
{

    vector<int> val;

    Node *current = head;

    while (current != NULL)
    {
        val.push_back(current->val);
        current = current->next;
    }

    sort(val.begin(), val.end());

    int n = val.size();
    if (n > 0)
    {
        cout << val[0] << " ";
        for (int i = 1; i < n; i++)
        {
            if (val[i] != val[i - 1])
            {
                cout << val[i] << " ";
            }
        }
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

    remove_duplicates(head);
    print_unique_val(head);

    return 0;
}

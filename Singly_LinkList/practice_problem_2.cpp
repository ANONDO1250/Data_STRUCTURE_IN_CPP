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
    cout << "This is Your LinkedList: ";

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

bool hasDuplicates(Node *head)
{
    vector<int> frequency(101, 0); // Frequency array

    Node *current = head;
    while (current != NULL)
    {
        frequency[current->val]++;
        current = current->next;
    }

    for (int i = 1; i <= 100; i++)
    {
        if (frequency[i] > 1)
        {
            return true; // Duplicate found
        }
    }

    return false; // No duplicates found
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

    if (hasDuplicates(head))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}

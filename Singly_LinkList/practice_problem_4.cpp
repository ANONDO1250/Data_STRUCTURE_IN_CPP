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
        this->next = nullptr;
    }
};

void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);

    if (head == nullptr)
    {
        head = newNode;
        return;
    }

    Node *temp = head;

    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void print_linkedList(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        std::cout << temp->val << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

Node *insert_at_index(Node *head, int index, int value)
{
    Node *newNode = new Node(value);

    if (index < 0)
    {
        std::cout << "Invalid" << std::endl;
        return head;
    }

    if (index == 0)
    {
        newNode->next = head;
        return newNode;
    }

    Node *curr = head;
    int currIndex = 0;
    while (curr != nullptr && currIndex < index - 1)
    {
        curr = curr->next;
        currIndex++;
    }

    if (curr == nullptr)
    {
        std::cout << "Invalid" << std::endl;
        return head;
    }

    newNode->next = curr->next;
    curr->next = newNode;
    return head;
}

int main()
{
    int val;
    Node *head = nullptr;

    std::cout << "Enter the elements of the linked list (-1 to exit):" << std::endl;

    while (true)
    {
        std::cin >> val;
        if (val == -1)
        {
            break;
        }
        else
        {
            insert_at_tail(head, val);
        }
    }

    print_linkedList(head);

    int queries;
    std::cout << "Enter the number of queries:" << std::endl;
    std::cin >> queries;

    for (int i = 0; i < queries; i++)
    {
        int index, value;
        std::cin >> index >> value;

        head = insert_at_index(head, index, value);

        print_linkedList(head);
    }

    return 0;
}
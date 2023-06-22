#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;

    ListNode(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class Solution
{
public:
    void insert_at_tail(ListNode *&head, ListNode *&tail, int val)
    {
        ListNode *newNode = new ListNode(val);

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }

        tail->next = newNode;
        tail = tail->next;
    }

    void reverse(ListNode *&head, ListNode *cur)
    {
        if (cur->next == NULL)
        {
            head = cur;
            return;
        }

        reverse(head, cur->next);
        cur->next->next = cur;
        cur->next = NULL;
    }

    bool isPalindrome(ListNode *head)
    {
        ListNode *newHead = NULL;
        ListNode *newTail = NULL;
        ListNode *tmp = head;

        while (tmp != NULL)
        {
            insert_at_tail(newHead, newTail, tmp->val);
            tmp = tmp->next;
        }

        reverse(newHead, newHead);

        tmp = head;
        ListNode *tmp2 = newHead;

        while (tmp != NULL)
        {
            if (tmp->val != tmp2->val)
            {
                return false;
            }
            tmp = tmp->next;
            tmp2 = tmp2->next;
        }

        return true;
    }
};

int main()
{
    int val;
    ListNode *head = NULL;
    ListNode *tail = NULL;

    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        else
        {
            Solution().insert_at_tail(head, tail, val);
        }
    }

    if (Solution().isPalindrome(head))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    ListNode *current = head;
    while (current != NULL)
    {
        ListNode *nextNode = current->next;
        delete current;
        current = nextNode;
    }

    return 0;
}

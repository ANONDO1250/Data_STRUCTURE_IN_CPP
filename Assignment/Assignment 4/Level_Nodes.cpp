
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        // 1.ber kore anlam
        Node *f = q.front();
        q.pop();

        // 2.joto kaj ase ekhane
        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);

        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        f->left = myLeft;
        f->right = myRight;

        // 3.children gulo k push koro
        if (f->left)
        {
            q.push(f->left);
        }
        if (f->right)
            q.push(f->right);
    }
    return root;
}

void Level_Order(Node *root, int n)
{

    queue<pair<Node *, int>> q;
    if (root)
    {
        q.push({root, 0});
    }

    int l;
    while (!q.empty())
    {
        // 1.ber kore anlam
        pair<Node *, int> pr = q.front();
        q.pop();
        Node *node = pr.first;
        l = pr.second;

        // 2.joto kaj ase ekhane
        if (l == n)
        {
            cout << node->val << " ";
        }
        // 3.children gulo k push korlam
        if (node->left)
            q.push({node->left, l + 1});
        if (node->right)
            q.push({node->right, l + 1});
    }
    if (n > l)
    {
        cout << "Invalid" << endl;
        return;
    }
}

int main()
{

    Node *root = input_tree();

    int n;
    cin >> n;
    Level_Order(root, n);
    return 0;
}

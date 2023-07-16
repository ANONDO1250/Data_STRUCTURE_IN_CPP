
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
int max_HIGHT(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int l = max_HIGHT(root->left);
    int r = max_HIGHT(root->right);
    return max(l, r) + 1;
}
int main()
{
    Node *root = input_tree();
    cout << max_HIGHT(root) << endl;

    return 0;
}
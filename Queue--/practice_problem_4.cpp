#include <bits/stdc++.h>
using namespace std;

int main()
{

    queue<int> q;
    stack<int> copy_q;
    queue<int> reverse_q;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    while (!q.empty())
    {
        copy_q.push(q.front());
        q.pop();
    }
    while (!copy_q.empty())
    {
        reverse_q.push(copy_q.top());
        copy_q.pop();
    }

    while (!reverse_q.empty())
    {
        cout << reverse_q.front() << " ";
        reverse_q.pop();
    }

    return 0;
}
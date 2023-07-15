#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    }

    void pop()
    {
        v.pop_back();
    }

    int top()
    {
        return v.back();
    }

    int size()
    {
        return v.size();
    }

    bool empty()
    {
        return v.empty();
    }
};

int main()
{
    myStack sta;
    myStack sta2;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sta.push(x);
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        sta2.push(x);
    }

    bool areEqual = true;

    if (sta.size() != sta2.size())
    {
        areEqual = false;
    }
    else
    {
        while (!sta.empty())
        {
            if (sta.top() != sta2.top())
            {
                areEqual = false;
                break;
            }
            sta.pop();
            sta2.pop();
        }
    }

    if (areEqual)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
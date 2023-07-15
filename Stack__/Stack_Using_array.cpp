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
        if (v.size() == 0)
            return true;
        else
            return false;
    }
};

int main()
{
    myStack sta;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sta.push(x);
    }
    while (sta.empty() == false)
    {
        cout << sta.top() << " ";
        sta.pop();
    }

    // ------this is for one value
    // sta.push(10);
    // sta.push(20);
    // cout << sta.top() << endl;
    // sta.pop();
    // cout << sta.top() << endl;
    // sta.pop();
    // if (sta.empty() == false)
    // {
    //     cout << sta.top() << endl;
    // }

    return 0;
}
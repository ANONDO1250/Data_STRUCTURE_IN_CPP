#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;

    stack<int> st;
    queue<int> q;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    bool areEqual = true;

    if (st.size() != q.size())
    {
        areEqual = false;
    }
    else
    {
        while (!st.empty())
        {
            if (st.top() != q.front())
            {
                areEqual = false;
                break;
            }
            st.pop();
            q.pop();
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
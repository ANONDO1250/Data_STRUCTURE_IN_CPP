#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    stack<int> copy_st;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    while (!st.empty())
    {
        copy_st.push(st.top());
        st.pop();
    }

    while (!copy_st.empty())
    {
        cout << copy_st.top() << " ";
        copy_st.pop();
    }

    return 0;
}
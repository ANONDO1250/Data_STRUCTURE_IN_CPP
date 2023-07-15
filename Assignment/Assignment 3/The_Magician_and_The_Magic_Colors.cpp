#include <bits/stdc++.h>
using namespace std;

int main()
{

    stack<char> st;

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        while (n--)
        {
            char c;
            cin >> c;

            if ((!st.empty() && c == 'R' && st.top() == 'B') || (!st.empty() && c == 'B' && st.top() == 'R'))
            {
                st.pop();
                st.push('P');
            }
            else if ((!st.empty() && c == 'R' && st.top() == 'G') || (!st.empty() && c == 'G' && st.top() == 'R'))
            {
                st.pop();
                st.push('Y');
            }
            else if ((!st.empty() && c == 'B' && st.top() == 'G') || (!st.empty() && c == 'G' && st.top() == 'B'))
            {
                st.pop();
                st.push('C');
            }
            else if (!st.empty() && st.top() == c)
            {
                st.pop();
            }
            else
            {
                st.push(c);
            }
        }

        stack<char> dup;
        while (!st.empty())
        {
            if (!dup.empty() && st.top() == dup.top())
            {
                st.pop();
                dup.pop();
            }
            else
            {
                dup.push(st.top());
                st.pop();
            }
        }

        while (!dup.empty())
        {
            cout << dup.top();
            dup.pop();
        }
        cout << endl;
    }

    return 0;
}

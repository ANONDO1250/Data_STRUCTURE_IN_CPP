#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int q;
    cin >> q;

    while (q--)
    {
        string s;
        cin >> s;

        stack<char> st;
        for (char c : s)
        {
            if ((!st.empty() && c == 'B' && st.top() == 'A') || (!st.empty() && c == 'A' && st.top() == 'B'))
            {
                st.pop();
            }
            else
            {
                st.push(c);
            }
        }

        if (st.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}

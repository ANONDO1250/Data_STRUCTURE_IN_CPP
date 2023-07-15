#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<string> QqQ;
    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;

        if (n == 0)
        {
            string name;
            cin >> name;
            QqQ.push(name);
        }

        if (!QqQ.empty())
        {
            if (n == 1)
            {
                cout << QqQ.front() << endl;
                QqQ.pop();
            }
        }
        else if (QqQ.empty() && n == 1)
        {
            cout << "Invalid" << endl;
        }
    }

    return 0;
}
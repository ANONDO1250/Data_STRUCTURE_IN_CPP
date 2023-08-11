#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Take input of the test caase
    int lol;
    cin >> lol;
    while (lol--)
    {
        // create the set
        set<int> st;
        // creater the priority_queue
        priority_queue<int> pq;

        // Take input
        int n;
        cin >> n;
        while (n--)
        {
            int val;
            cin >> val;
            st.insert(val);
        }

        // Sort it
        for (auto i : st)
        {
            pq.push(i);
        }

        while (!pq.empty())
        {
            cout << pq.top() << " ";
            pq.pop();
        }

        cout << endl;
    }

    return 0;
}
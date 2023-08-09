#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    while (n--)
    {
        //  Take input
        int x;
        cin >> x;
        v.push_back(x);
        int cur_index = v.size() - 1; // index of current node || value
        while (cur_index != 0)
        {
            int par_index = (cur_index - 1) / 2; // index of parent node of the  node || value
            if (v[cur_index] > v[par_index])
            {
                swap(v[cur_index], v[par_index]);
            }
            else
                break;
            cur_index = par_index;
        }
    }

    for (auto &&i : v)
        cout << i << " ";

    return 0;
}
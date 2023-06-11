#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> countVector(1004, 0);

    for (int i = 0; i < n; i++)
    {
        countVector[a[i]]++;
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (countVector[a[i] + 1] > 0)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}

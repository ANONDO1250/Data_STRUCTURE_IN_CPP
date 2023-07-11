#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int mid = n / 2;
    int s = 0;

    for (int i = 0; i < mid; i++)
    {
        for (int j = 0; j < s; j++)
        {
            cout << " ";
        }
        cout << "\\"; // ekhane \ eta print korbe

        for (int j = 0; j < n - 2 * s - 2; j++) // majer space print korbe
        {
            cout << " ";
        }
        cout << "/" << endl;

        s++;
    }

    for (int i = 0; i < s; i++)
    {
        cout << " ";
    }
    cout << "X" << endl;

    for (int i = mid - 1; i >= 0; i--)
    {
        s--;
        for (int j = 0; j < s; j++)
        {
            cout << " ";
        }
        cout << "/";
        for (int j = 0; j < n - 2 * s - 2; j++)
        {
            cout << " ";
        }
        cout << "\\" << endl;
    }

    return 0;
}

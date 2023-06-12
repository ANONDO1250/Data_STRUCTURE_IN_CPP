#include <bits/stdc++.h>
using namespace std;

bool cdup(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // jodi soman hy thle true
            if (arr[i] == arr[j])
            {
                return true;
            }
        }
    }

    return false;
}

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (cdup(a, n))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}

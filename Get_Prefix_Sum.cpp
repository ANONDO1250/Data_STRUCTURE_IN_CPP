#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<long long> pSum(n);

    pSum[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        pSum[i] = pSum[i - 1] + arr[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        cout << pSum[i] << " ";
    }
    cout << endl;

    return 0;
}
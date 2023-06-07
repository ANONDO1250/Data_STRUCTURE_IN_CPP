#include <bits/stdc++.h>
using namespace std;

int main()
{

    int Num;
    cin >> Num;

    vector<int> Number(Num);

    for (int i = 0; i < Num; i++)
    {
        cin >> Number[i];
    }
    reverse(Number.begin(), Number.end());

    for (auto Nol : Number)
    {
        cout << Nol << " ";
    }

    return 0;
}
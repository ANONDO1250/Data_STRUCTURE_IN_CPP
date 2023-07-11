#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> MyList;
    int val;

    while (cin >> val && val != -1) //-1 er ag porjonto
    {
        MyList.push_back(val);
    }

    MyList.sort(); // assendinig order e short

    MyList.unique();

    for (int value : MyList) // unique value print
    {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}

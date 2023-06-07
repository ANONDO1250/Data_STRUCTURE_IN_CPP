#include <bits/stdc++.h>
using namespace std;

void display(vector<int> &ref)
{
    for (int i = 0; i < ref.size(); i++)
    {
        cout << ref[i] << " ";
    }
}

int main()
{
    vector<int> num;
    int elements, size;
    cout << "Enter the size  of the vector" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter an Elements:";
        cin >> elements;
        num.push_back(elements);
    }
    // display(num);
    vector<int>::iterator iter = num.begin();
    num.insert(iter + 1, 3, 56);
    display(num);

        // vector<int> num;
    // num.push_back(1);
    // num.push_back(2);
    // num.push_back(3);

    // for (int i = 0; i < num.size(); i++)
    // {
    //     cout << num[i] << endl;
    // }

    // vector<int>::iterator lol;
    // for (lol = num.begin(); lol != num.end(); lol++)
    // {

    //     cout << *lol;
    // }
    // cout << endl;

    // for (auto element : num)
    // {
    //     cout << element;
    // }

    return 0;
}
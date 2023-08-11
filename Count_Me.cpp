#include <bits/stdc++.h>
using namespace std;

int main()
{
    // map create korbo count er jonnoo
    int Q;
    cin >> Q;
    cin.ignore();
    while (Q--)
    {
        map<string, int> MMPP;
        map<string, int> MMPP2;
        string sentence;
        getline(cin, sentence);

        // Saparate words and count
        stringstream ss(sentence);
        string words;
        while (ss >> words)
        {
            MMPP[words]++;
        }

        // maximum ta khuje ber korte hbe
        int countMax = 0;
        for (auto &&s : MMPP)
        {
            if (s.second > countMax)
            {
                countMax = s.second;
            }
        }

        // jodi soman hy then frist coutmax will print
        string lexci;
        stringstream ss2(sentence);
        while (ss2 >> words)
        {
            MMPP2[words]++;
            if (MMPP2[words] == countMax)
            {
                lexci = words;
                break;
            }
        }

        cout << lexci << " " << countMax << endl;
    }

    return 0;
}
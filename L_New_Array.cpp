#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N; // Ekhane amra user theke ekta input nelam

    vector<int> A(N); // array A  input nelam and ekhane N holo age jeta user input debe
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    vector<int> B(N); // ekhane B input nelam
    for (int i = 0; i < N; i++)
    {
        cin >> B[i];
    }

    vector<int> C; // ekhane C

    C.reserve(A.size() + B.size()); // Reserve space

    // Concatenate B followed by A
    C.insert(C.end(), B.begin(), B.end()); // ekahne C er shes e B print kortecy karon amadaer B age chasie

    C.insert(C.end(), A.begin(), A.end()); // C er por A

    // Output the concatenated array C
    for (int i = 0; i < C.size(); i++)
    {
        cout << C[i] << " ";
    }
    cout << endl;

    return 0;
}

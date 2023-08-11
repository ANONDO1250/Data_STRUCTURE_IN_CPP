#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string Name;
    int marks;
    int roll;

    Student(string name, int roll, int marks)
    {
        this->Name = name;
        this->marks = marks;
        this->roll = roll;
    }
};
// Make the custome compare
class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.marks == b.marks)
            return a.roll > b.roll;
        else
            return a.marks < b.marks;
    }
};

int main()
{

    // make priority_queue
    priority_queue<Student, vector<Student>, cmp> pq;

    // Take input
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        int roll, marks;
        cin >> roll >> marks;
        pq.push(Student(s, roll, marks));
    }

    int qus;
    cin >> qus;
    while (qus--)
    {
        int x;
        cin >> x;

        if (x == 0)
        {
            string s;
            cin >> s;
            int roll, marks;
            cin >> roll >> marks;
            pq.push(Student(s, roll, marks));
            cout << pq.top().Name << " " << pq.top().roll << " " << pq.top().marks << endl;
        }

        else if (x == 1) // print
        {
            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << pq.top().Name << " " << pq.top().roll << " " << pq.top().marks << endl;
            }
        }
        else if (x == 2) // delete
        {
            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                pq.pop();
                if (pq.empty())
                {
                    cout << "Empty" << endl;
                }
                else
                {
                    cout << pq.top().Name << " " << pq.top().roll << " " << pq.top().marks << endl;
                }
            }
        }
    }

    return 0;
}
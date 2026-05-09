#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string stu;
    int num, mark, del, Id;
    vector<string> student;
    vector<int> marks;
    vector<int> id;

    cout << "Enter the number  of students:" << endl;
    cin >> num;
    cout << "\nEnter names of students:" << endl;

    for (int i = 0; i < num; i++)
    {
        cin >> stu;
        student.push_back(stu);
    }

    cout << "\nStudents:\n";
    for (string s : student)
    {
        cout << s << " ";
    }
    cout << endl;

    cout << "\nEnter marks for each student:\n";
    for (int p = 0; p < num; p++)
    {
        cout << "Student " << student[p] << " : ";
        cin >> mark;
        marks.push_back(mark);
    }

    cout << "\nEnter the ID for each student:\n";
    for (int l = 0; l < num; l++)
    {
        cout << "\nID for " << student[l] << " : ";
        cin >> Id;
        id.push_back(Id);
    }

    cout << "\n--- Student Data ---\n";
    for (int b = 0; b < student.size(); b++)
    {
        cout << "Name : " << student[b] << endl;
        cout << "ID   : " << id[b] << endl;
        cout << "Mark : " << marks[b] << endl;
        cout << "\n-------------------------\n";
    }

    cout << "Enter the index of the student you will delete:\n";
    cin >> del;

    if (del >= 0 && del < student.size())
    {
        student.erase(student.begin() + del);
        id.erase(id.begin() + del);
        marks.erase(marks.begin() + del);
    }
    else
    {
        cout << "Invalid index\n";
    }

    cout << "\n--- After Deletion ---\n";
    for (int b = 0; b < student.size(); b++)
    {
        cout << "Name : " << student[b] << endl;
        cout << "ID   : " << id[b] << endl;
        cout << "Mark : " << marks[b] << endl;
        cout << "\n-------------------------\n";
    }

    return 0;
}

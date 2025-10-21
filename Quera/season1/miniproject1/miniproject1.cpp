#include <iostream>

using namespace std;

struct Student
{
    string name;
    int studentID;
    int units;
    float gpa;
    string securityCode;
    Student *next;
};

void addStudent(Student *&head, const string &name, int studentID, int units, float gpa, const string &securityCode);
bool deletestudent(Student *&head, int studentID);
Student *searchStudent(Student *head, int studentID);
bool updateStudent(Student *head, int studentID, int newUnits, float newGPA);
void displayAllRecords(Student *head);

int main()
{
    Student *student = nullptr;

    cout << "hello alleykom" << endl;

    while (true)
    {
        int n = 0;
        bool exit = false;
        cout << "choose of the function:";
        cout << "add student: (1)";
        cout << "delete student: (2)";
        cout << "search student: (3)";
        cout << "update student: (4)";
        cout << "display all records: (5)";
        cout << "exit: (-1)";
        cin >> n;
        switch (n)
        {
        case 1:
            addStudent(Student * &head, const string &name, int studentID, int units, float gpa, const string &securityCode);
            break;

        case 2:
            bool deletestudent(Student * &head, int studentID);
            break;

        case 3:
            Student *searchStudent(Student * head, int studentID);

            break;

        case 4:
            bool updateStudent(Student * head, int studentID, int newUnits, float newGPA);

            break;

        case 5:
            void displayAllRecords(Student * head);

            break;

        case -1:
            exit = true;
            break;

        default:
            break;
        }
        if (exit)
            break;
    }

    return 0;
}

void addStudent(Student *&head, const string &name, int studentID, int units, float gpa, const string &securityCode)
{
}
bool deletestudent(Student *&head, int studentID)
{
}
Student *searchStudent(Student *head, int studentID)
{
}
bool updateStudent(Student *head, int studentID, int newUnits, float newGPA)
{
}
void displayAllRecords(Student *head)
{
}

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

void addStudent(Student *&head);
bool deletestudent(Student *&head);
Student *searchStudent(Student *head);
bool updateStudent(Student *head, int studentID, int newUnits, float newGPA);
void displayAllRecords(Student *head);

// void addStudent(Student *&head, const string &name, int studentID, int units, float gpa, const string &securityCode);
// bool deletestudent(Student *&head, int studentID);
// Student *searchStudent(Student *head, int studentID);
// bool updateStudent(Student *head, int studentID, int newUnits, float newGPA);
// void displayAllRecords(Student *head);

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
            addStudent(student);
            break;

        case 2:
            bool deletestudent(student);
            break;

        case 3:
            Student *searchStudent(student); // نکته داره این . فرق ارجاع پونتر با رفرنس و ارجاع پوینتر
            // ??????????????????????
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

void addStudent(Student *&head)
{
    Student *newstu = new Student;
    cin >> newstu->name;
    cin >> newstu->studentID;
    cin >> newstu->units;
    cin >> newstu->gpa;
    cin >> newstu->securityCode;
    newstu->next = nullptr;

    if (head->next == nullptr)
    {
        head = newstu;
    }
    Student *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newstu;
}
bool deletestudent(Student *&head)
{
    int studentid = 0;
    cin >> studentid;

    if (head == nullptr)
        return false;

    // ????????????????
    // ????????????????

    Student *temp = head;
    while (temp->studentID != studentid && temp->next != nullptr)
    {
        temp = temp->next;
    }
    if (temp->studentID == studentid)
    {
        Student *temp2 = head;
        while (temp2->next != &*temp && temp2->next != nullptr) // or *&
        {
            temp2 = temp2->next;
        }

        if (temp2->next == &*temp)
        {
            temp2 = temp->next;
            delete temp;
        }

        return true;
    }
    else
    {
        return false;
    }
}
Student *searchStudent(Student *head)
{
    int studentid = 0;
    cin >> studentid;
    Student *temp = head;
    while (temp->studentID != studentid && temp->next != nullptr)
    {
        temp = temp->next;
    }
    if (temp->studentID == studentid)
    {
        return temp;
    }
    else
    {
        return nullptr;
    }
}
bool updateStudent(Student *head, int studentID, int newUnits, float newGPA)
{
}
void displayAllRecords(Student *head)
{
}

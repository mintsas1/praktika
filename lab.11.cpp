
#include <iostream>
#include <string>

using namespace std;


struct Student {
    string name;
    int age;
    float average_grade;
};

int main() {
    setlocale(LC_CTYPE, "ukr");
    const int MAX_STUDENTS = 8; 
    Student students[MAX_STUDENTS]; 

   
    cout << "������ ���������� ��� ��������:" << endl;
    for (int i = 0; i < MAX_STUDENTS; ++i) {
        cout << "������� #" << (i + 1) << ":" << endl;
        cout << "��'�: ";
        cin >> students[i].name; 
        cout << "³�: ";
        cin >> students[i].age; 
        cout << "������� ���: ";
        cin >> students[i].average_grade; 
    }

    
    cout << "\n���������� ��� ��������:" << endl;
    for (int i = 0; i < MAX_STUDENTS; ++i) {
        cout << "������� #" << (i + 1) << ":" << endl;
        cout << "��'�: " << students[i].name << endl; 
        cout << "³�: " << students[i].age << endl; 
        cout << "������� ���: " << students[i].average_grade << endl; 
    }

    return 0;
}






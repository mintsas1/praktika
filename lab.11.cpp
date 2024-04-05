
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

   
    cout << "Введіть інформацію про студентів:" << endl;
    for (int i = 0; i < MAX_STUDENTS; ++i) {
        cout << "Студент #" << (i + 1) << ":" << endl;
        cout << "Ім'я: ";
        cin >> students[i].name; 
        cout << "Вік: ";
        cin >> students[i].age; 
        cout << "Середній бал: ";
        cin >> students[i].average_grade; 
    }

    
    cout << "\nІнформація про студентів:" << endl;
    for (int i = 0; i < MAX_STUDENTS; ++i) {
        cout << "Студент #" << (i + 1) << ":" << endl;
        cout << "Ім'я: " << students[i].name << endl; 
        cout << "Вік: " << students[i].age << endl; 
        cout << "Середній бал: " << students[i].average_grade << endl; 
    }

    return 0;
}






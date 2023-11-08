#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct STUDENT {
    string name;
    int groupNumber;
    double grades[5];
};

bool compareByGroup(const STUDENT& student1, const STUDENT& student2) {
    return student1.groupNumber < student2.groupNumber;
}

int main() {

    setlocale(LC_ALL, "Ukrainian");


    const int numStudents = 10;
    STUDENT students[numStudents];

    
    for (int i = 0; i < numStudents; i++) {
        cout << "Введіть прізвище студента " << (i + 1) << ": ";
        cin >> students[i].name;

        cout << "Введіть номер групи студента " << (i + 1) << ": ";
        cin >> students[i].groupNumber;

        cout << "Введіть оцінки студента " << (i + 1) << " (5 оцінок розділені пробілами): ";
        for (int j = 0; j < 5; j++) {
            cin >> students[i].grades[j];
        }
    }

    
    sort(students, students + numStudents, compareByGroup);

    bool found = false; 

    
    for (int i = 0; i < numStudents; i++) {
        double averageGrade = 0.0;
        for (int j = 0; j < 5; j++) {
            averageGrade += students[i].grades[j];
        }
        averageGrade /= 5.0;

        if (averageGrade > 4.0) {
            cout << "Студент: " << students[i].name << ", Група: " << students[i].groupNumber << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "Немає студентів із середнім балом більше 4.0." << endl;
    }

    return 0;
}

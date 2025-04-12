#include <iostream>
#include "student_card.hpp"
#include <iomanip>

using namespace std;

void student_card(Student &s){
    cout << "\n------------- Student Card -------------" << endl;
    cout << "------------ Academic Info ------------" << endl;
    cout << left << setw(20) << "Name: " << s.name << endl;
    cout << left << setw(20) << "Surname: " << s.surname << endl;
    cout << left << setw(20) << "Group: " << s.group << endl;
    cout << left << setw(20) << "Grade: " << s.grade << endl;
    cout << left << setw(20) << "Group Letter: " << s.char_input << endl;
    cout << left << setw(20) << "Student Number: " << s.student_number << endl;
    cout << left << setw(20) << "Best Subject: " << s.subjects[s.best_index] << " (" << s.subject_grades[s.best_index] << ")" << endl;
    cout << left << setw(20) << "Absences: " << s.absence_count << endl;
    cout << left << setw(20) << "Last Failed Subject: " << s.failed_subject << endl;

    cout << "\n----------- Physical Info -------------" << endl;
    cout << left << setw(20) << "Age: " << s.age << endl;
    cout << left << setw(20) << "Gender: " << s.gender << endl;
    cout << left << setw(20) << "Height: " << s.height << " m" << endl;
    cout << left << setw(20) << "Weight: " << s.weight << " kg" << endl;
    cout << left << setw(20) << "BMI: " << fixed << setprecision(2) << s.bmi_score << endl;
    cout << left << setw(20) << "Is Eligible (18+): " << boolalpha << s.isEligible << endl;
    cout << "---------------------------------------\n" << endl;
}
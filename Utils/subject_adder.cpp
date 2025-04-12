#include <iostream>
#include "subject_adder.hpp"

using namespace std;

void subject_adder(Student &s){
    cout << "How many subjects do you want to enter (max 10): ";
    cin >> s.subject_count;

    while (s.subject_count < 1 || s.subject_count > s.max_subject_count) {
        cout << "Please enter between 1 and 10 subjects: ";
        cin >> s.subject_count;
    }

    for (int i = 0; i < s.subject_count; i++) {
        while (true) {
            cout << "Enter subject name: ";
            cin >> s.subjects[i];
            cout << "Enter grade for " << s.subjects[i] << ": ";
            cin >> s.subject_grades[i];

            if (s.subject_grades[i] < 0 || s.subject_grades[i] > 100) {
                cout << "Please enter a valid grade (0-100)." << endl;
            } else {
                cout << s.subjects[i] << " Grade Updated: " << s.subject_grades[i] << endl;
                break;
            }
        }
    }
}

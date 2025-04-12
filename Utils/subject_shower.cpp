#include <iostream>
#include "student.hpp"

using namespace std;


void subject_shower(Student &s){
    s.best_index = 0;

    for (int i = 1; i < s.subject_count; i++) {
        if (s.subject_grades[i] > s.subject_grades[s.best_index]) {
            s.best_index = i;
        }
    }
    cout << "Your best grade is in " << s.subjects[s.best_index]
         << " with a score of " << s.subject_grades[s.best_index] << endl;
}
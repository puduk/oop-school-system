#include <iostream>
#include "failed_subject_shower.hpp"

using namespace std;

void failed_subject_shower(Student &s){
    cout << "Failed Subjects (below 50):" << endl;
    for (int i = 0; i < s.subject_count; i++) {
        if (s.subject_grades[i] < 50) {
            cout << "- " << s.subjects[i] << " (" << s.subject_grades[i] << ")" << endl;
            s.failed_subject = s.subjects[i];
        }
    }
}
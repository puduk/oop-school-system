#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;

class Student{
  public:

    string name, surname, group, char_input, student_number;
    int age, grade, option_numbers;
    char gender;
    string polish_citizen, europe_citizen;

    static const int max_subject_count = 10;
    string subjects[max_subject_count];
    double subject_grades[max_subject_count]{};

    double bmi_score;
    bool isEligible ;

    int subject_count;
    int best_index = 0;
    int absence_index = 0;
    int absence_count = 0;
    int new_absence = 0;

    double height, weight;
    string failed_subject;

    Student();
};

#endif
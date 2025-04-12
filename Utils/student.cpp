#include <iostream>
#include "student.hpp"

using namespace std;

Student::Student(){

    name = "";
    surname = "";
    group = "";
    char_input = "";
    student_number = "";
    age = 0;
    grade = 0;
    option_numbers = 0;
    gender = ' ';
    polish_citizen = "";
    europe_citizen = "" ;

    for (int i = 0 ; i < max_subject_count ; i++){
      subjects[i] = "";
      subject_grades[i] = 0.00;
      }

    bmi_score = 0.0;
    isEligible = false;
    subject_count = 0;
    best_index = 0;
    absence_index = 0;
    absence_count = 0;
    new_absence = 0;
    height = 0.00;
    weight = 0.00;
    failed_subject = "";
    }









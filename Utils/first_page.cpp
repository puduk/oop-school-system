#include <iostream>
#include "first_page.hpp"
#include "management.hpp"


using namespace std;

int first_page(Student &s){
        cout << "-------------------- School System -------------------- " << endl;
        cout << "Enter your name: ";
        cin >> s.name;
        cout << "Enter your surname: ";
        cin >> s.surname;
        cout << "Which group are you currently studying: ";
        cin >> s.group;
        cout << "Enter your student_number: ";
        cin >> s.student_number;
        cout << "How old are you: ";
        cin >> s.age;

        while (true) {
                cout << "Please enter your grade. (1-12): ";
                cin >> s.grade;
                if (s.grade >= 1 && s.grade <= 12)
                        break;
        }

        while (true) {
                cout << "What's your group letter (A-Z): ";
                cin >> s.char_input;
                if (s.char_input.length() == 1 && isalpha(s.char_input[0])) {
                        break;
                } else {
                        cout << "Please enter ONLY SINGLE character." << endl;
                }
        }

        while (true) {
                cout << "Please enter your gender (M-F): ";
                cin >> s.gender;
                if (s.gender == 'M' || s.gender == 'm' || s.gender == 'F' || s.gender == 'f')
                        break;
                else
                        cout << "There are only 2 genders :)" << endl;
        }

        cout << "What is your height (meters): ";
        cin >> s.height;
        cout << "What is your weight (kg): ";
        cin >> s.weight;

        s.bmi_score = s.weight / (s.height * s.height);
        s.isEligible = (s.age > 18);
        return management(s); ;

}
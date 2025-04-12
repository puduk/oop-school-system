#include <iostream>
#include <iomanip>
#include "management.hpp"
#include "citizenship_check.hpp"
#include "subject_adder.hpp"
#include "subject_shower.hpp"
#include "absences_shower.hpp"
#include "failed_subject_shower.hpp"
#include "student_card.hpp"

using namespace std;
int management(Student &s){

    do {
        cout << "\nStudent Page" << endl;
        cout << "------------------------------" << endl;
        cout << "1 - Learn tuition fee" << endl;
        cout << "2 - Add new grades" << endl;
        cout << "3 - Show best grade" << endl;
        cout << "4 - Absence system" << endl;
        cout << "5 - Show failed subjects" << endl;
        cout << "6 - Student card" << endl;
        cout << "7 - Quit" << endl;
        cout << "------------------------------" << endl;
        cout << "Your choice: ";
        cin >> s.option_numbers;
        switch (s.option_numbers) {
                case 1:
                        citizenship(s);
                return management(s);
                case 2:
                        subject_adder(s);
                return management(s);
                case 3:
                        subject_shower(s);
                return management(s);
                case 4:
                        absences_shower(s);
                return management(s);
                case 5:
                        failed_subject_shower(s);
                return management(s);
                case 6:
                        student_card(s);
                return management(s);
                case 7:
                        cout << "Quitting..." << endl;
                return 0;
                default:
                        cout << "Invalid choice. Please try again." << endl;
                break;
        }
        } while (s.option_numbers != 7);
        cout << "Goodbye, " << s.name << " " << s.surname << "!" << endl;
    return 0;
}
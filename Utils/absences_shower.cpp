#include <iostream>
#include "absences_shower.hpp"
using namespace std;

void absences_shower(Student &s){

    do {
        cout << "\nAbsence System:\n";
        cout << "1 - Show current absences" << endl;
        cout << "2 - Add new absences" << endl;
        cout << "3 - Go back to main menu" << endl;
        cout << "Choice: ";
        cin >> s.absence_index;

        switch (s.absence_index) {
            case 1:
                cout << "You have " << s.absence_count << " absences." << endl;
            break;
            case 2:
                while (true) {
                    cout << "How many new absences do you want to add? ";
                    cin >> s.new_absence;
                    if (s.new_absence > 5)
                        cout << "You cannot add more than 5 at once." << endl;
                    else {
                        s.absence_count += s.new_absence;
                        cout << s.new_absence << " absences added." << endl;
                        break;
                    }
                }
            break;
        }
    } while (s.absence_index != 3);
}
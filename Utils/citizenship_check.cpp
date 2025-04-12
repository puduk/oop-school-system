#include <iostream>
#include "citizenship_check.hpp"
using namespace std;

void citizenship(Student &s){

    cout << "Are you a Polish citizen? ";
    cin >> s.polish_citizen;
    cout << "Do you have European citizenship? ";
    cin >> s.europe_citizen;
    if (s.polish_citizen == "yes" || s.polish_citizen == "Yes") {
        cout << "Your tuition cost is $1000." << endl;
    } else if (s.europe_citizen == "yes" || s.europe_citizen == "Yes") {
        cout << "Your tuition cost is $5000." << endl;
    } else {
        cout << "Your tuition cost is $10000." << endl;
    }
}
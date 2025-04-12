## 🏫 Object-Oriented School Management System (C++)
- A simple console-based school system written in object-oriented C++.
- Features include subject & absence tracking, student registration, failed grade display, BMI-based physical data, and tuition fee calculator with citizenship logic.
- This project was built in just **6 hours**, with only **4 days of C++ experience.
  
## ✨ Features
- 🧑‍🎓 Student registration with age & gender validation
- 📚 Add subjects and grades (0-100)
- 📈 Show best grade with real-time update
- 📉 Show failed subjects below 50
- 📅 Absence system with max limit & input check
- 🌍 Tuition calculator based on Polish / EU citizenship
- 🪪 Student card with formatted display using iomanip
- 🧮 BMI calculator and 18+ eligibility checker
- 🔄 Menu-based navigation with switch-case logic
- 🔁 Input validation and user feedback with while, do-while
---
## 🧠 Technologies & Concepts Used
- ✅ Object-Oriented Programming using a Student class
- ✅ Modular project structure with .cpp / .hpp separation
- ✅ Input validation using cin.fail(), bounds, and conditions
- ✅ BMI formula implementation with formatted output
- ✅ Menu control via loops and branching
- ✅ Console UI and user flow logic
---
## 📝 Notes
- 📌 This is my 5th C++ project, built to strengthen my understanding of classs and modular design.
- 📌 No advanced libraries or file I/O were used — only variables, loops, and pure logic.
- 📌 Separated all source files for better real-world practice.
- 📌 BMI and Citizenship logic were implemented with real formulas & reasoning.
- 📌 This entire project was developed in just **6 hours**, as part of my effort to master object-oriented C++ with modular file separation and real-world logic.

---
##🏗️ File Structure

📁 Fifth_Project/
- │
- ├── absences_shower.cpp / .hpp
- ├── citizenship_check.cpp / .hpp
- ├── failed_subject_shower.cpp / .hpp
- ├── first_page.cpp / .hpp
- ├── management.cpp / .hpp
- ├── student.cpp / .hpp
- ├── student_card.cpp / .hpp
- ├── subject_adder.cpp / .hpp
- ├── subject_shower.cpp / .hpp
- │
- ├── main.cpp
- ├── CMakeLists.txt
- ├── .gitignore
- ├── .gitattributes

## 🛠 How to Run
```
g++ -o school_app *.cpp
./school_app
```
## 📦 How to Use
```
$ ./school_app
-------------------- School System --------------------
Enter your name: Mert
Enter your surname: Demir
Which group are you currently studying: B
Enter your student_number: 22030101
How old are you: 21
Please enter your grade. (1-12): 11
What's your group letter (A-Z): C
Please enter your gender (M-F): M
What is your height (meters): 1.78
What is your weight (kg): 68
```
## 🧭 Step 2: Main Menu Navigation
```
Student Page
------------------------------
1 - Learn tuition fee
2 - Add new grades
3 - Show best grade
4 - Absence system
5 - Show failed subjects
6 - Student card
7 - Quit
------------------------------
Your choice: 2
```
## 📚 Step 3: Add Subjects
```
How many subjects do you want to enter (max 10): 3
Enter subject name: Math
Enter grade for Math: 95
Math Grade Updated: 95
Enter subject name: Physics
Enter grade for Physics: 42
Physics Grade Updated: 42
Enter subject name: English
Enter grade for English: 81
English Grade Updated: 81

```

## 💳 Step 4: View Student Card
```
Your choice: 6

------------- Student Card -------------
Name:            Mert
Surname:         Demirkasaoğlu
Group:           B
Grade:           11
Group Letter:    C
Student Number:  22030101
Best Subject:    Math (95)
Absences:        0
Last Failed Subject: Physics

Age:             21
Gender:          M
Height:          1.78 m
Weight:          68 kg
BMI:             21.46
Is Eligible:     true
---------------------------------------
```

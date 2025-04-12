cmake_minimum_required(VERSION 3.30)
project(Fifth_Project)

set(CMAKE_CXX_STANDARD 20)

add_executable(Fifth_Project main.cpp Utils/management.cpp Utils/first_page.cpp Utils/student.cpp Utils/absences_shower.cpp Utils/citizenship_check.cpp Utils/failed_subject_shower.cpp Utils/student_card.cpp Utils/subject_adder.cpp Utils/subject_shower.cpp)

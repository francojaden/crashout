#include "student.h"
#include <iostream>
#include <numeric> 
#include <iomanip>

using namespace std;

Student::Student(string studentName) : name(studentName) {}

void Student::addGrade(double grade) {
    grades.push_back(grade);
}

double Student::calculateAverage() const {
    if (grades.empty()) {
        return 0.0;
    }
    double sum = accumulate(grades.begin(), grades.end(), 0.0);
    return sum / grades.size();
}

void Student::printDetails() const {
    double average = calculateAverage();
    cout << "Student Name: " << name << endl;
    cout << "Average Grade: " << fixed << setprecision(2) << average << endl;
}

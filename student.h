#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student {
private:
    string name;
    vector<double> grades;

public:
    Student(string studentName);
    void addGrade(double grade);
    double calculateAverage() const;
    void printDetails() const;
};



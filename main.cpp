#include <iostream>
#include "student.h"

using namespace std;

int main() {
    Student student1("John Doe");

    student1.addGrade(90.0);
    student1.addGrade(85.0);
    student1.addGrade(95.0);

    student1.printDetails(); 

    return 0;
}

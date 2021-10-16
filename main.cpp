#include <iostream>
#include <stdlib.h>
#include "algorithm"
#include "ACM.h"
#include "IEEE.h"
using namespace std;

struct Course{
    string nameOfCourse;
    int numberOfStudents;
    string lecturer = "Aigul Imanbaeva";
};

template <class T>
class Student{
private:
    T nameOfStudent;
    T ID;
    T age;
    T Course;
    T Activity = "IEEE"; //by default
    friend ostream &operator<<( ostream &output, const Student<T> &student ) {
        cout << "Name" << "            " << "ID" << "            " << "Age" << "            " << "Courses" << "            " << "Activities" <<endl;
        cout << "--------------------------------------------------------------------------------------------------------" << endl;
        output << student.nameOfStudent << "          " << student.ID << "          " << student.age << "            " << student.Course << "            " << student.Activity << endl;
        return output;
    }
    friend istream &operator>>( istream &input, Student<T> &student ) {
        input >> student.nameOfStudent >> student.ID >> student.age >> student.Course >> student.Activity;
        return input;
    }
};

int main() {
    //std::cout << "Hello, World!" << std::endl;
    Student<string> student_object;
    cin >> student_object;
    cout << student_object;
    //struct Course course;
    //cout<<course.nameOfCourse<<course.numberOfStudents<<course.lecturer;
    //Example data:
    //Meiram
    //123123
    //18
    //Algebra
    //IEEE
    return 0;
}

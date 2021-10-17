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
    Student& operator=(const Student& other){
        if (this->nameOfStudent != other.nameOfStudent && this->Course!= other.Course && this->age != other.age &&
        this->ID!=other.ID && this->Activity!=other.Activity){
            this->nameOfStudent = other.nameOfStudent;
            this->Course = other.Course;
            this->age = other.age;
            this->ID = other.ID;
            this->Activity = other.Activity;
        }
    }

public:
    Student(T nameOfStudent, T ID, T age, T Course, T Activity): nameOfStudent(nameOfStudent), ID(ID), age(age), Course(Course),
    Activity(Activity){}
    Student(){}

    T getNameOfStudent() const {
        return nameOfStudent;
    }

    T getId() const {
        return ID;
    }

    T getAge() const {
        return age;
    }

    T getCourse() const {
        return Course;
    }

    T getActivity() const {
        return Activity;
    }

    void setNameOfStudent(T nameOfStudent) {
        Student::nameOfStudent = nameOfStudent;
    }

    void setId(T id) {
        ID = id;
    }

    void setAge(T age) {
        Student::age = age;
    }

    void setCourse(T course) {
        Course = course;
    }

    void setActivity(T activity) {
        Activity = activity;
    }

    bool operator==(const string other){    //overloading operator == to use in user defined class
        return this->nameOfStudent==other;
    }
};

void setDefault(Student<string> &student){      //function that sets default all fields of object student
    student.setActivity("Unknown");
    student.setAge("Unknown");
    student.setCourse("Unknown");
    student.setId("Unknown");
    student.setNameOfStudent("Unknown");
    }

bool isAdult(Student<string> student){return student.getAge() > "18";}

int main() {
    vector <Student<string>> student_objects[15];
    for (int i=0; i<6; i++) {
        student_objects->push_back(Student<string>("Yerzhan", "123123", "21", "Math", "IEEE"));
        student_objects->push_back(Student<string>("Meiram", "123123", "18", "Math", "IEEE"));
    }
    //inputting data by overloaded input operator
//        Student<string> tempStudent;
//        cin>>tempStudent;
//        student_objects->push_back(tempStudent);

    //outputting the object values by overloaded output operator
//    for (int i=0; i<13; i++){
//        cout << student_objects->at(i)<<endl;
//    }

    //usage of count() algorithm with user defined classes
//    cout<<count(student_objects->begin(), student_objects->end(), "Yerzhan")<<" students whose name is Yerzhan\n";
//    cout<<count(student_objects->begin(), student_objects->end(), "Meiram")<<" students whose name is Meiram\n\n";

    //usage of find() algorithm with user defined classes
//    vector<Student<string>>::iterator it = find(student_objects->begin(), student_objects->end(), "Yerzhan");
//    if (it!=student_objects->end()) {
//        cout << "First occurence of student with name Yerzhan is: \n" << *it.base()<<"\n";
//    }

    //using for_each algorithm with user defined class
//    for_each(student_objects->begin(), student_objects->end(), *setDefault);
//    for (int i=0; i<2; i++){
//        cout << student_objects->at(i)<<endl;
//    }

    //using count_if algorithm with user defined class
    cout <<"The number of adult students is: " << count_if(student_objects->begin(), student_objects->end(), isAdult);


    //Example data:
    //Meiram
    //123123
    //18
    //Algebra
    //IEEE


    return 0;
}

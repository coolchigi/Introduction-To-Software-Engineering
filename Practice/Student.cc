#include "Student.h"

Student::Student(string name, string num){
    this->name = name;
    number = num;
}

Student::Student(Student& student){
    name = student.name;
    number = student.number;

}


bool Student::lessThan(Student& stu){
    return name < stu.name;

}

void Student::print(){
    cout<<endl;
    cout<<"Student name  : "<<name<<endl;
    cout<<"Student number: "<<number<<endl<<endl;

}

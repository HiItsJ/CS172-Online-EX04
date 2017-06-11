//
//  Course.cpp
//  EX04
//
//  Created by Josiah on 6/11/17.
//  Copyright © 2017 Josiah. All rights reserved.
//

#include <iostream>
#include "Course.hpp"

Course::Course(const string& courseName, int capacity)
{
    numberOfStudents = 0;
    this->courseName = courseName;
    this->capacity = capacity;
    students = new string[capacity];
}

Course::Course(const Course& course)
{
    courseName = course.courseName;
    numberOfStudents = course.numberOfStudents;
    capacity = course.capacity;
    students = new string[capacity];
}

Course::~Course()
{
    delete [] students;
}

string Course::getCourseName() const
{
    return courseName;
}

string* Course::doubleCapacity(const string* list, int size){
    string* newList = new string[size*2];
    for (int i=0; i<size; i++){
        newList[i] = list[i];
    }
    return newList;
}

void Course::addStudent(const string& name)
{
    if (numberOfStudents == capacity){
        doubleCapacity(students, capacity);
    }
    students[numberOfStudents] = name;
    numberOfStudents++;
}

void Course::dropStudent(const string& name)
{
    bool found = false;
    for (int i=0; i<capacity; i++){
        if (students[i] == name){
            found = true;
        }
        if (found){
            students[i] = students[i+1];
        }
    }
    if (found){
        numberOfStudents--;
    }
}

string* Course::getStudents() const
{
    return students;
}

int Course::getNumberOfStudents() const
{
    return numberOfStudents;
}

void Course::Clear(){
    for (int i=0; i<capacity; i++){
        students[i] = "";
    }
}

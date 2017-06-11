//
//  Course.hpp
//  EX04
//
//  Created by Josiah on 6/11/17.
//  Copyright © 2017 Josiah. All rights reserved.
//

#ifndef Course_hpp
#define Course_hpp

#include <stdio.h>
using namespace std;

class Course{
    int numberOfStudents;
    string courseName;
    int capacity;
    string* students;
public:
    Course(const string& courseName, int capacity);
    Course(const Course&);
    ~Course();
    string getCourseName() const;
    string* doubleCapacity(const string* list, int size);
    void addStudent(const string& name);
    void dropStudent(const string& name);
    string* getStudents() const;
    int getNumberOfStudents() const;
    void Clear();
};

#endif /* Course_hpp */

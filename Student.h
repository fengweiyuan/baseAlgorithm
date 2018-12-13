#ifndef ALGORITHM_STUDENT_H
#define ALGORITHM_STUDENT_H

#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    int score;

    // 运算符重载
    bool operator<(const Student &otherStudent) {
        return score < otherStudent.score;
    }

    // 友元函数，运算符重载
    friend ostream& operator<<(ostream &os, const Student &student) {
        os << "Student: " << student.name << " " << student.score << endl;
        return os;
    }

};
#endif //ALGORITHM_STUDENT_H

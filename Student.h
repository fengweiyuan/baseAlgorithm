#ifndef ALGORITHM_STUDENT_H
#define ALGORITHM_STUDENT_H

#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    int score;

    // ���������
    bool operator<(const Student &otherStudent) {
        return score < otherStudent.score;
    }

    // ��Ԫ���������������
    friend ostream& operator<<(ostream &os, const Student &student) {
        os << "Student: " << student.name << " " << student.score << endl;
        return os;
    }

};
#endif //ALGORITHM_STUDENT_H

#include <iostream>
#include <iomanip>
using namespace std;

const int maxInstance = 15;

struct studentType {
    string studentFName, studentLName;
    int testScore;
    char grade;
};

void readArray(studentType student[]) {
    for (int i = 0; i < maxInstance; i++) {
        cout << "Enter first name: ";
        getline(cin, student[i].studentFName);

        cout << "Enter last name: ";
        getline(cin, student[i].studentLName);

        cout << "Enter test score: ";
        cin >> student[i].testScore;
        cin.ignore();
        
        cout << endl;
    }
}

void assignGrade(studentType student[]) {
    for (int i = 0; i < maxInstance; i++) {
        if (student[i].testScore >= 90) {
            student[i].grade = 'A';
        } else if (student[i].testScore >= 80) {
            student[i].grade = 'B';
        } else if (student[i].testScore >= 70) {
            student[i].grade = 'C';
        } else if (student[i].testScore >= 60) {
            student[i].grade = 'D';
        } else {
            student[i].grade = 'F';
        }
    }
}

int findHighestScore(studentType student[]) {
    int highest = student[0].testScore;
    for (int i = 0; i < maxInstance; i++) {
        if (student[i].testScore > highest) {
            highest = student[i].testScore;
        }
    }
    return highest;
}

void printTopStudents(studentType student[], int highestScore) {
    cout << "Student(s) with highest score: \n";
    for (int i = 0; i < maxInstance; i++) {
        if (student[i].testScore == highestScore) {
            cout << student[i].studentLName << ", " << student[i].studentFName << endl;
        }
    }
    cout << endl;
    cout << "Highest score achieved: " << highestScore << "\n\n";
}

void printAllStudents(studentType student[]) {
    cout << "------------------------------------------------\n";
    cout << "-             Student Information              -\n";
    cout << "------------------------------------------------\n";

    cout << left << setw(30) << "Name"
         << setw(10) << "Score"
         << setw(10) << "Grade" << endl;

    cout << "------------------------------------------------\n";

    for (int i = 0; i < maxInstance; i++) {
        string fullName = student[i].studentLName + ", " + student[i].studentFName;

        cout << left << setw(32) << fullName
             << setw(10) << student[i].testScore
             << setw(10) << student[i].grade << endl;
    }

    cout << "------------------------------------------------\n";
}

int main() {
    studentType student[15];
    int highestScore;

    readArray(student);
    assignGrade(student);

    highestScore = findHighestScore(student);
    printTopStudents(student, highestScore);
    printAllStudents(student);

    return 0;
}
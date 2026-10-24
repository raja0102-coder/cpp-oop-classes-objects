#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Class Definition: Encapsulating student data and behaviors
class Student {
private:
    int rollNo;
    string name;
    double gpa;

public:
    // Constructor for object initialization
    Student(int r, string n, double g) {
        rollNo = r;
        name = n;
        gpa = g;
    }

    // Member function to display student record
    void displayInfo() const {
        cout << "    Roll No: " << rollNo 
             << " | Name: " << name 
             << " | GPA: " << gpa << endl;
    }

    // Getter method to access private GPA data safely
    double getGpa() const {
        return gpa;
    }
};

int main() {
    cout << "==================================================\n";
    cout << "      C++ OBJECT-ORIENTED PROGRAMMING (OOP)       \n";
    cout << "==================================================\n\n";

    // 1. Instantiating Objects from Class
    cout << "[1] INSTANTIATING STUDENT OBJECTS (Encapsulation):\n";
    vector<Student> students = {
        Student(101, "Raja Babu", 9.15),
        Student(102, "Aarav Sharma", 8.80),
        Student(103, "Priya Singh", 9.45)
    };

    for (size_t i = 0; i < students.size(); ++i) {
        cout << "    Record " << (i + 1) << " -> ";
        students[i].displayInfo();
    }
    cout << "\n";

    // 2. Accessing Member Functions & Encapsulated Data
    cout << "[2] ACADEMIC STANDING EVALUATION:\n";
    for (size_t i = 0; i < students.size(); ++i) {
        if (students[i].getGpa() >= 9.0) {
            cout << "    [HONORS] High achiever detected with GPA: " << students[i].getGpa() << "\n";
        }
    }

    cout << "\n==================================================\n";

    return 0;
}

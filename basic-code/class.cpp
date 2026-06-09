#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int age;

public:
    Student(string n, int a) {
        name = n;
        age = a;
        cout << "Constructor called: Object initialized." << endl;
    }

    void displayInfo() {
        cout << "--- Student Information ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Age:  " << 20 << endl;
        cout << "---------------------------" << endl;
    }
};

int main() {
     
    return 0;
}
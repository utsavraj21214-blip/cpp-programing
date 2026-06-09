#include<iostream>
using namespace std;

class Factorial {
private:
    int num;
    long long fact;

public:
    void getNumber() {
        cout << "Enter a number: ";
        cin >> num;
    }

    void calculateFactorial() {
        if(num < 0) {
            cout << "Factorial of negative number does not exist." << endl;
        }
        else {
            fact = 1;

            for(int i = 1; i <= num; i++) {
                fact = fact * i;
            }

            cout << "Factorial of " << num << " = " << fact << endl;
        }
    }
};

int main() {
    Factorial f;

    f.getNumber();
    f.calculateFactorial();

    return 0;
}
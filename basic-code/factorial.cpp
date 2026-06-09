#include<iostream>
using namespace std;

class Factorial {
public:
    int n;
    long long f = 1;

    void fact() {
        cin >> n;
        for(int i = 1; i <= n; i++)
            f *= i;
        cout << "Factorial = " << f;
    }
};

int main() {
    Factorial obj;
    obj.fact();
    return 0;
}

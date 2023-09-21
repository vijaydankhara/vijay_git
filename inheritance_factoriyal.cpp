#include <iostream>
using namespace std;


class Number {
protected:
    int n;

public:
    void getNumber() 
    {
        cout << "Enter a number: ";
        cin >> n;
    }
};

class Factorial : public Number {
public:
    int vijay() {
        int factorial = 1;
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        return factorial;
    }
};

int main() {
    Factorial fact;
    fact.getNumber();
    int ans = fact.vijay();
    cout << "Factorial of "  << '!' << '=' << ans << endl;
}
#include <iostream> 
using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction(int num = 0, int denom = 1) {
        numerator = num;
        denominator = denom;
    }
    void setFraction(int num, int denom) {
        numerator = num;
        denominator = denom;
    }
    void print() const {
        cout << numerator << "/" << denominator;
    }
    Fraction add(Fraction& other) {
        int num = numerator * other.denominator + other.numerator * denominator;
        int denom = denominator * other.denominator;
        return Fraction(num, denom);
    }

    Fraction subtract(Fraction& other) {
        int num = numerator * other.denominator - other.numerator * denominator;
        int denom = denominator * other.denominator;
        return Fraction(num, denom);
    }
    Fraction multiply(Fraction& other) {
        int num = numerator * other.numerator;
        int denom = denominator * other.denominator;
        return Fraction(num, denom);
    }
    Fraction divide(Fraction& other) {
        int num = numerator * other.denominator;
        int denom = denominator * other.numerator;
        return Fraction(num, denom);
    }
};

int main() {
    Fraction f1(4, 8);
    Fraction f2(2, 4);

    cout << "f1: ";
    f1.print();
    cout << "\nf2: ";
    f2.print();
    Fraction sum = f1.add(f2);
    cout << "\n\nf1 + f2 = ";
    sum.print();

    Fraction diff = f1.subtract(f2);
    cout << "\nf1 - f2 = ";
    diff.print();
    Fraction product = f1.multiply(f2);
    cout << "\nf1 * f2 = ";
    product.print();
    Fraction quotient = f1.divide(f2);
    cout << "\nf1 / f2 = ";
    quotient.print();

    cout << endl;

    return 0;
}
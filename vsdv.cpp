#include <iostream>
using namespace std;

// Template function to swap two variables
template<typename T>
void Swap(T &x, T &y)
{
    T temp = x;
    x = y;
    y = temp;
}

// User-defined Complex number class
class Complex {
public:
    Complex(double real = 0.0, double imag = 0.0) : real(real), imag(imag) {}

    friend ostream& operator<<(ostream &out, const Complex &c) {
        out << c.real << " + " << c.imag << "i";
        return out;
    }

    // To allow comparison
    bool operator==(const Complex &other) const {
        return real == other.real && imag == other.imag;
    }

private:
    double real, imag;
};

int main()
{
    // Example usage with int
    int a = 3, b = 7;
    cout << "Before swapping int: a = " << a << ", b = " << b << endl;
    Swap(a, b);
    cout << "After swapping int: a = " << a << ", b = " << b << endl;

    // Example usage with char
    char x = 'X', y = 'Y';
    cout << "Before swapping char: x = " << x << ", y = " << y << endl;
    Swap(x, y);
    cout << "After swapping char: x = " << x << ", y = " << y << endl;

    // Example usage with Complex
    Complex c1(3.0, 4.0), c2(1.0, 2.0);
    cout << "Before swapping Complex: c1 = " << c1 << ", c2 = " << c2 << endl;
    Swap(c1, c2);
    cout << "After swapping Complex: c1 = " << c1 << ", c2 = " << c2 << endl;

    return 0;
}


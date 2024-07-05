#include <iostream>
#include <cmath>

class QuadraticEquation {
private:
    double a, b, c;

public:
    // Constructor
    QuadraticEquation(double a, double b, double c) : a(a), b(b), c(c) {}

    
    void solve() {
        if (a == 0) {
            std::cout << "This is not a quadratic equation." << std::endl;
            return;
        }

        double delta = b * b - 4 * a * c;

        if (delta > 0) {
            double x1 = (-b + sqrt(delta)) / (2 * a);
            double x2 = (-b - sqrt(delta)) / (2 * a);
            std::cout << "The equation has two distinct real roots: x1 = " << x1 << " and x2 = " << x2 << std::endl;
        }
        else if (delta == 0) {
            double x = -b / (2 * a);
            std::cout << "The equation has one double root: x = " << x << std::endl;
        }
        else {
            double realPart = -b / (2 * a);
            double imaginaryPart = sqrt(-delta) / (2 * a);
            std::cout << "The equation has two complex roots: "
                << "x1 = " << realPart << " + " << imaginaryPart << "i and "
                << "x2 = " << realPart << " - " << imaginaryPart << "i" << std::endl;
        }
    }
};

int main() {
    double a, b, c;

    std::cout << "Enter coefficients a, b, and c: ";
    std::cin >> a >> b >> c;

    QuadraticEquation equation(a, b, c);
    equation.solve();

    return 0;
}

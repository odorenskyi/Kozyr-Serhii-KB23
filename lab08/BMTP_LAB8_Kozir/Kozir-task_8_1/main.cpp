#include <iostream>
#include <cmath>

int main() {

    double x, y, z;
    std::cout << "Enter the value of x: ";
    std::cin >> x;
    std::cout << "Enter the value of y: ";
    std::cin >> y;
    std::cout << "Enter the value of z: ";
    std::cin >> z;

    double S = sqrt(fabs(pow(z, 2) * 0.5 * y)) + ((3.14 * x + exp(fabs(y))) / y);

    std::cout << "Result of computation S: " << S << std::endl;

    return 0;
}

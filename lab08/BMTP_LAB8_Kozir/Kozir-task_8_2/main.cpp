#include <iostream>
#include <iomanip>

// Function to calculate s
double s_calculation(double x, double y, double g) {
    return x * y / (g * g);
}

int main() {
          printf ("\n\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 218,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
 printf ("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",179,130,168,170,174,173,160,162,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,179);
 printf ("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",195,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,180);
 printf ("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",179,138,174,167,168,224,236,255,145,165,224,163,105,169,255,255,255,255,255,255,255,255,255,179);//i 105
 printf ("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",179,130,225,105,255,175,224,160,162,160,255,167,160,229,168,233,165,173,105,33,33,33,255,179);
 printf ("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",192,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);

    // Input variables x, y, g, a, and b
    double x, y, z;
    char a, b;

    // Input values
    std::cout << "Enter the value of x: ";
    std::cin >> x;
    std::cout << "Enter the value of y: ";
    std::cin >> y;
    std::cout << "Enter the value of z: ";
    std::cin >> z;
    std::cout << "Enter the character a: ";
    std::cin >> a;
    std::cout << "Enter the character b: ";
    std::cin >> b;

    // Result of the logical expression a + 5 >= b
    bool result = (a + 5 >= b);
    std::cout << "Result of the condition a + 5 >= b: " << (result ? "true" : "false") << std::endl;

    // Output values of x, y, g in decimal and hexadecimal numeral systems
    std::cout << "Value of x in decimal numeral system: " << x << std::endl;
    std::cout << "Value of y in decimal numeral system: " << y << std::endl;
    std::cout << "Value of z in decimal numeral system: " << z << std::endl;
    std::cout << "Value of x in hexadecimal numeral system: " << std::hex << std::showbase << static_cast<int>(x) << std::endl;
    std::cout << "Value of y in hexadecimal numeral system: " << std::hex << std::showbase << static_cast<int>(y) << std::endl;
    std::cout << "Value of z in hexadecimal numeral system: " << std::hex << std::showbase << static_cast<int>(z) << std::endl;

    // Calculation of the value of s and its output
    double s = s_calculation(x, y, z);
    std::cout << "Value of s: " << s << std::endl;

    return 0;
}

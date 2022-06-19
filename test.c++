#include <iostream>
using namespace std;

#include "complex.hpp"

int main() {
    Complex a(0.1, 0.2);
    Complex b(0.2, 0.3);

    Complex c = a + b;
    cout << c.a;
}
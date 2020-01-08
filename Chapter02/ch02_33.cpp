// Exercise 2.33
// Date: 2020-01-08

#include <iostream>

int main() {
    int i = 0, &r = i;
    auto a = r;     // a -- integer
    const int ci = i, &cr = ci;
    auto b = ci;    // b -- integer
    auto c = cr;    // c -- integer
    auto d = &i;    // d -- integer pointer
    auto e = &ci;   // e -- const integer pointer
    const auto f = ci;  // f -- const integer
    auto &g = ci;   // g -- const integer reference
    // auto &h = 42 Error
    const auto &j = 42; // j -- const integer reference
    auto k = ci, &l = i;    // k -- integer, l -- integer refrence;
    auto &m = ci, *p = &ci; // m -- integer reference, p -- integer pointer
    
    a = 42;
    std::cout << "a = " << a << std::endl;
    b = 42;
    std::cout << "b = " << b << std::endl;
    c = 42;
    std::cout << "c = " << c << std::endl;
    // d = 42; Error, d is a integer pointer
    // e = 42; Error, e is a const integer pointer
    // g = 42; Error, g is a const integer reference

    return 0;
}
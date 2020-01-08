// Exercise 2.14
// Date: 2020-01-08

#include <iostream>

int main() {
    int i = 100, sum = 0;
    for (int i = 0; i != 10; ++i) {
        sum += i;
    }
    std::cout << i << " " << sum << std::endl;

    return 0;
}
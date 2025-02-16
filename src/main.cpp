#include <iostream>


int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);

int main() {
    int x = 5, y = 3;
    std::cout << "This is an updated message in the main branch!" << std::endl;
    std::cout << "Sum: " << add(x, y) << std::endl;
    std::cout << "Difference: " << subtract(x, y) << std::endl;
    std::cout << "Product: " << multiply(x, y) << std::endl;
    return 0;
}

#include <iostream>
#include <new>

int main()
{

    try {
        while (1)
            new double[10000000];
    }
    catch (const std::bad_alloc& err) {
        std::cout << "Allocation failed: " << err.what() << '\n';
    }
    catch (...) {
        std::cout << "cokolwiek " << '\n';
    }
}

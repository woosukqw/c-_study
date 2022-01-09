#include <iostream>

int main() {

    /*
    malloc == new
    Usage: datatype* pointer = new datatype;

    free == delete
    Usage: delete pointer;
    */
    int* p = new int;
    *p = 10;
    std::cout << *p << std::endl;
    delete p;

    return 0;
}

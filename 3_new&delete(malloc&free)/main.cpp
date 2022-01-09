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

    //new allocating array example.
    int len = 5;
    int *parr = new int[len];
    for (int i=0; i<len; i++){
        *(parr+i) = i;
    }
    for (int i=0; i<len; i++){
        std::cout << i << "th element of array: " << parr[i] << std::endl;
    }
    // new-delete, new[]-delete[]
    delete[] parr;
    
    
    
    return 0;
}

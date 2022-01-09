#include <iostream>

int main() {

    //reference(참조자) &
    int d = 5;
    int& ref = d;

    std::cout << d << std::endl;
    ref = 10;
    std::cout << d << std::endl;

    //reference of array
    int arr1[3] = {1,2,3};
    int(&ref2)[3] = arr1; // ref[0] 이 arr1[0] 의 reference, ``[1]이 ``[1]의 reference ...

    ref2[0] = 3;
    ref2[2] = 1;

    std::cout << arr1[0] << arr1[1] << arr1[2] << std::endl;

    return 0;
}

#include <iostream>
/*
 * namespace 속에 있는 값, 함수들을 불러와 사용하기위해?..
 * cout, cin, endl은 iostream헤더파일의 std라는 namespace에 정의되어 있음.
 * using namespace std; 하면 cout << "~" << endl; 도 가능, but 권장 안함
 *
 * std::cout << 출력할값1 << 2 << ... << n;
 * std::endl -> 화면에 출력해주는 함수
 * std::cout << std::endl; -> 엔터 하나 출력
 *
 */
int main() {
    std::cout << "Hello, World!" << std::endl;

    //printf == std::cout << ~ || scanf== cin >> ~
    int a, b;
    std::cin >> a >> b;
    std::cout << a << " " << b << std::endl;
    // 자료형
    int i;
    char c;
    double d;
    float f;

    //포인터 방법 C와 동일
    int arr[10];
    int *parr = arr;
    int i1;
    int *pi = &i1;

    //for
    //int i;
    for (int i = 0; i<10; i++){
        std::cout << i << " ";
    }
    std::cout << std::endl;

    //while
    i = 0;
    int sum = 0;
    while (i <= 10){
        sum += i;
        i += 1;
    }
    std::cout << "sum: " << sum << std::endl;

    //if
    if (i == 11){
        std::cout << "i: 11" << std::endl;
        i += 1;
    }
    else{
        std::cout << "i != 11" << std::endl;
    }

    //이외 switch, break, continue 등 C와 동일.
    std::cout << &i << std::endl;



    return 0;
}

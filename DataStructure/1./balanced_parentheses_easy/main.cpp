#include <iostream>
#include"Stack.h"

//소괄호만 입력되는 상황에서 balanced_parentheses 판별

Stack::Stack() {
    top = -1;
}
Stack::~Stack(){
    delete [] data;
    //data[MAX_STACK_SIZE] = NULL;
}

void Stack::push(int x){
    // TODO
}

void Stack::pop(){
    // TODO
}

bool Stack::isFull() {
    // TODO
}

bool Stack::isEmpty() {
    // TODO
}

bool check_brace(char str[]){
    Stack stack;

    for (int j = 0; str[j]; j++){
        if ( str[j] == '(' )
            stack.push('(');
        else if ( str[j] == ')' ){
            if ( stack.isEmpty() )
                return false;
            stack.pop();
        }
    }
    if ( stack.isEmpty() )
        return true;
    return false;
}
int main(){
    char str[50];
    std::cin >> str;

    if ( check_brace(str) )
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;

}

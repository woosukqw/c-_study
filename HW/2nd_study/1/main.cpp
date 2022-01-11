#include <iostream>
#include"Stack.h"

Stack::Stack() {
    top = -1;
}
Stack::~Stack(){
    delete [] data;
    //data[MAX_STACK_SIZE] = NULL;
}

void Stack::push(int x){
    if (isFull()){
        error("stack full error");
    }
    top += 1;
    data[top] = x;
}

void Stack::pop(){
    if (isEmpty()){
        error("stack empty error");
    }
    top -= 1;
}

bool Stack::isFull() {
    if (top == MAX_STACK_SIZE)
        return true;
    else
        return false;
}

bool Stack::isEmpty() {
    if (top == -1)
        return true;
    else
        return false;
}

int Stack::size(){
    return top+1;
}

void Stack::display() {
    for (int i=0; i<=top; i++){
        std::cout << i << "th value: " << data[i] << std::endl;
    }
}
/*
사용해도 되고, main함수 안에 코딩해도 무관함.
bool check_brace(char str[]){
    //TODO
}
*/
int main(){
    // TODO

}

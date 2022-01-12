#include <iostream>
#include"Stack.h"

Stack::Stack() {
    top = -1;
}
Stack::~Stack(){
    delete [] data;
}

void Stack::push(int x){
    //TODO
}

void Stack::pop(){
    //TODO
}

int Stack::peek(){
    //TODO
}

bool Stack::isFull() {
    //TODO
}

bool Stack::isEmpty() {
    //TODO
}

int Stack::size(){
    //TODO
}

void Stack::display() {
    //TODO
}

int main(){
    Stack stack;
    stack.push(5);
    stack.push(3);
    stack.pop();
    std::cout << "peek of Stack: " << stack.peek() << std::endl;
    std::cout << "size of Stack: " << stack.size() << std::endl;
    stack.display();
}

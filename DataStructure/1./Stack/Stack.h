#include <iostream>
#include"Stack.h"
// https://m.blog.naver.com/ds020228/221481496225
// https://m.blog.naver.com/PostView.nhn?blogId=tipsware&logNo=221212462913&proxyReferer=https:%2F%2Fwww.google.com%2F
// https://better-tomorrow.tistory.com/entry/c%EB%A1%9C-stack-%EA%B5%AC%ED%98%84STL-without-STL
// https://www.youtube.com/watch?v=7C9RgOcvkvo&list=PLRx0vPvlEmdAghTr5mXQxGpHjWqSz0dgC&index=4
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
    std::cout << "* pushed "<< x << " into stack" << std::endl;
}

void Stack::pop(){
    if (isEmpty()){
        error("stack empty error");
    }
    std::cout << "* popped "<< Stack::peek() << " from stack" << std::endl;
    top -= 1;
}

int Stack::peek(){
    if (isEmpty()){
        error("stack empty error");
    }

    return data[top];
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

int main(){
    Stack stack;
    stack.push(5);
    stack.push(3);
    stack.pop();
    std::cout << "peek of Stack: " << stack.peek() << std::endl;
    std::cout << "size of Stack: " << stack.size() << std::endl;
    stack.display();
}

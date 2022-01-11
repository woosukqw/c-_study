#include<iostream>

inline void error(const char *str){
    std::cout << str << std::endl;
    exit(1);
}

const int MAX_STACK_SIZE = 50;

class Stack{
private:
    int top;
    char* data = new char[MAX_STACK_SIZE];

public:
    Stack();
    ~Stack();
    void reset(){
        top = -1;
    }
    void push(int x);
    void pop();
    int peek();
    bool isFull();
    bool isEmpty();
    int size();
    void display();
};

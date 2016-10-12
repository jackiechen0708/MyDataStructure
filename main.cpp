#include <iostream>
#include <array>
#include "stack.h"

using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    stack stack1(10);
    cout<<stack1.getSize();
    stack1.push(10);
    stack1.push(9);

//    stack1.push(100);
    cout<<stack1.pop()<<stack1.pop()<<stack1.pop()<<stack1.pop();



    return 0;


}
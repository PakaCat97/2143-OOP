#include <iostream>

using namespace std;

class ArrayStack {
private:
  int *stack;
  int top;

public:
  ArrayStack() {
    top = -1;
    stack = new int[10];
  }
  ArrayStack(int size) {
    top = -1;
    stack = new int[size];
  }
  void push(int x) {
    top++;
    stack[top] = x;
  }
  int pop() {
    int temp = stack[top];
    --top;
    return temp;
  }
  void print() {
    for (int i = 0; i <= top; i++) {
      cout << stack[i] << endl;
    }
  }
};

int main() {
  //
  std::cout << "Hello World!\n";
  ArrayStack arrStack1(10);
  ArrayStack arrStack2;

  arrStack1.push(3);
  arrStack1.push(2);
  arrStack1.push(9);
  arrStack1.pop();
  arrStack1.pop();
  arrStack1.push(11);
  arrStack1.print();
}
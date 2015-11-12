#include <iostream>

using std::endl;
using std::cout;

class A {
public:
    A() { cout << "A called" << endl; }
    void print() { cout << "A print" << endl; }
};

class B : public A {
public:
    B() { cout << "B called" << endl; }
    void print(int a) { cout << "B print" << endl; }
};

int main(int argc, char* argv[])
{
    B b;
    b.A::print();  // b.print(); error: no matching function for call to ‘B::print()’
    return 0;
}

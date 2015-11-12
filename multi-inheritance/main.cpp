#include <iostream>

using std::endl;
using std::cout;

class A {
public:
    A() { cout << "A called" << endl; }
    void print() { cout << "A print" << endl; }
};

class B {
public:
    B() { cout << "B called" << endl; }
    void print() { cout << "B print" << endl; }
};

class C : public A, public B {
public:
    C() { cout << "C called" << endl; }
};

int main(int argc, char* argv[])
{
    C c;
    c.A::print(); // c.print(); error: request for member ‘print’ is ambiguous
    return 0;
}
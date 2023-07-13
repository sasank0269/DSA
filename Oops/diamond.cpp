#include<iostream>
using namespace std;

class A
{
int x;
public:
A(int i) { x = i; }
void print() { cout << x; }
};

class B: virtual public A
{
public:
B():A(10) { }
};

class C: virtual public A
{
public:
C():A(10) { }
};

class D: public B, public C {
    public:
    D(): A(20){}
};

int main()
{
	D d;
	d.print();//prints 20
	return 0;
}

/*
class A
{
int x;
public:
void setX(int i) {x = i;}
void print() { cout << x; }
};

class B: public A
{
public:
B() { setX(20); }
};

class C: public A
{
public:
C() { setX(10); }
};

class D: public B, public C {
    public:
    D() {}
};

int main()
{
	D d;
	d.C::print();
	return 0;
}

*/
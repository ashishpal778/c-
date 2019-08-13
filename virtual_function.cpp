#include<iostream>
using namespace std;
class A{
public:
	virtual void f1(){cout<<"parant class";}
};
class B:public A{
	void f1(){cout<<"deriver or child class";}
};
int main(){
	A *p;
	B b;
	p=&b;
	p->f1();  // agar hum virtual function nhi bnate to parent class ka funtion call hota because pointer class A ka h
}
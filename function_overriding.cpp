#include<iostream>
using namespace sts;
class A{
	 int a;
	public:
	void car(){
	}
	void f2(){
	}
};
class B:public A{
	void car(){  //function overriding
}
	void f2(int){  //function hidding
	}
	};
int main(){
	B.obj;
	obj.f2(); //error
	obj.f2(4); 
}

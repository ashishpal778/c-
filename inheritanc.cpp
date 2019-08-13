#include<iostream>
using namespace std;
class A{
	int a;
protected:
 void set_data(int x){
 	a=x;
 }
public:
	void show_data(){
		cout<<a<<endl;
	}
};
class B:public A {
public:
	void set_value(int x){
		set_data(x);
	}
} ;
int main(){
	B b;
	b.set_value(3);
	b.show_data();
}
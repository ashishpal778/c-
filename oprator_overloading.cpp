#include<iostream>
using namespace std;
class optr_overloading{
	int a;
	int b;
public:
	void set_data(int x,int y){
		a=x;
		b=y;
	}
	void show_data(){
		cout<<a<<" "<<b<<endl;
	}
	optr_overloading operator+(optr_overloading o2){
		optr_overloading temp;
		temp.a=a+o2.a;
		temp.b=b+o2.b;
		return temp;
	}
};
int main(){
	optr_overloading o1,o3,o4;
	o1.set_data(8 ,9);
	o3.set_data(8, 9);
	o4=o1+o3;           //for unary oprator 04=-o1; 
	o4.show_data();

}
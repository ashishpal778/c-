#include<iostream>
using namespace std;
template <class X> X add(X a ,X b){
	X sum;
	sum= a+b;
	return sum;
}
int main (){
	int x=6,y=5;
	cout<<add(x,y)<<endl;
	float x1=6.3 ,y1=9.3;
		cout<<add(x1,y1)<<endl;
}